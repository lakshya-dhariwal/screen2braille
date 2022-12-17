// Put all the javascript code here, that you want to execute after page load.

chrome.tabs.query({ currentWindow: true, active: true }, function (tabs) {
  console.log(tabs[0].url);
});
