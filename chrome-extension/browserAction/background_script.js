// Put all the javascript code here, that you want to execute in background.
let TAB_URL =
  "https://www.geeksforgeeks.org/get-and-post-method-using-fetch-api/";
const SUMMARIZER_API_URL = "https://api.meaningcloud.com/summarization-1.0";
let SUMMARY = "";

const SUMMARIZER_OPTIONS = {
  method: "POST",
  headers: {
    Accept: "multipart/form-data",
  },
};

// chrome.tabs.query({ currentWindow: true, active: true }, function (tabs) {
//   return (TAB_URL = tabs[0].url);
// });

async function getSummary() {
  try {
    const formdata = new FormData();
    formdata.append("key", "5b972915e9547b37bae3dcb4c959173e");
    formdata.append("url", TAB_URL);
    formdata.append("sentences", "3");
    const requestOptions = {
      method: "POST",
      body: formdata,
      redirect: "follow",
    };

    const summaryData = await fetch(SUMMARIZER_API_URL, requestOptions);
    const summary = await summaryData.json();
    displaySummary(summary.summary);
  } catch (error) {
    console.log({ error });
  }
}

function displaySummary(summary) {
  const div = document.querySelector(".summary");
  div.innerText = summary;
}
setTimeout(() => {
  getSummary();
}, 100);
