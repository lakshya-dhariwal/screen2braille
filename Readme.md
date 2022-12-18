# Screen2braille

Get Webpage summaries in Braile and Audio format, making the web more accessible for the physically challenged.

## 💡 Inspiration

We wanted to have an application which can summarize a given website and can help us to grasp the information quickly. But the application would have a drawback where people with disability could not use it.   

So we created **Screen2braille** which summarizes the text available on the user's browser window and converts it into braille script through IoT by using servo which makes buldges and the characters of the braille is formed as well as has a text to speech system in place.

## 💻 What it does

Our web app **Screen2braille** is built with the following features:
- Web-page content Summariation
- Text to speech
- Braille formation using servo.

## 🏅 Accomplishments that we're proud of

- We are proud to help the visually challenged and the audio-challenged to get access to information through digital means.
- We are proud of the fact that we were able to complete the project in the given time.
- We are able to empower differently-abled people in a better way.

## ⚙️ How we built it

- WebApp: We created a chrome extension using javascript. We utilized native chrome features to extract content. Then we generated a summary. This summary can be heard using Speech Engine or passed to our Hardware for Braille conversion.

- Hardware : Arduino and ESP8266. The ESP8266 provides connectivity to the internet. The Arduino works as the main Micro Controlling Unit or the MCU for the project. The Arduino retrieves the text from the server using the ESP8266 Wi-Fi module. The text is then converted into Braille script using Servo motors. The movement of servo motors create bulges which acts as braille characters for the users to read.

## 📖 What we learned

- How to take digital input and convert it into tactile output using Arduino , breadboards and arduino.
- We learned how to make chrome extension.
- We learnt how to debug a chrome extension and load the extension using chrome debug mode.
