#include <string.h>
#include <Servo.h>

int servoPin1 = 2;
int servoPin2 = 3;
int servoPin3 = 8;
int servoPin4 = 11;
int servoPin5 = 12;
int servoPin6 = 13;

Servo Servo1;
Servo Servo2; 
Servo Servo3; 
Servo Servo4; 
Servo Servo5; 
Servo Servo6; 


void setup() {
  Serial.begin(9600);
  Serial.println("Hello, Screen2Braille Here");
   Servo1.attach(servoPin1);
   Servo2.attach(servoPin2);
   Servo3.attach(servoPin3);
   Servo4.attach(servoPin4);
   Servo5.attach(servoPin5);
   Servo6.attach(servoPin6);

  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);

}

void printA(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

	digitalWrite(4,HIGH);
  Servo1.write(90);
    delay(2000);
    }

void printB(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

	digitalWrite(4,HIGH);
  Servo1.write(90);
  digitalWrite(6,HIGH);
  Servo3.write(90);
    delay(2000);
    }

void printC(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

	digitalWrite(4,HIGH);
  Servo1.write(90);
  digitalWrite(5,HIGH);
  Servo2.write(90);
    delay(2000);
    }

void printD(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

	digitalWrite(4,HIGH);
  Servo1.write(90);
  digitalWrite(7,HIGH);
  Servo4.write(90);
  digitalWrite(5,HIGH);
  Servo2.write(90);
    delay(2000);
    }

void printE(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

	digitalWrite(4,HIGH);
  Servo1.write(90);
  digitalWrite(7,HIGH);
  Servo4.write(90);
    delay(2000);
    }

void printF(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

	digitalWrite(4,HIGH);
  Servo1.write(90);
  digitalWrite(5,HIGH);
  Servo2.write(90);
  digitalWrite(6,HIGH);
  Servo3.write(90);
    delay(2000);
    }

void printG(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

	digitalWrite(4,HIGH);
  Servo1.write(90);
  digitalWrite(5,HIGH);
  Servo2.write(90);
  digitalWrite(6,HIGH);
  Servo3.write(90);
  digitalWrite(7,HIGH);
  Servo4.write(90);
    delay(2000);
    }

void printH(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

	digitalWrite(4,HIGH);
  Servo1.write(90);
  digitalWrite(6,HIGH);
  Servo3.write(90);
  digitalWrite(7,HIGH);
  Servo4.write(90);
    delay(2000);
    }

void printI(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

	digitalWrite(5,HIGH);
  Servo2.write(90);
  digitalWrite(6,HIGH);
  Servo3.write(90);
    delay(2000);
    }

void printJ(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

		digitalWrite(5,HIGH);
    Servo2.write(90);
    digitalWrite(7,HIGH);
    Servo4.write(90);
    digitalWrite(6,HIGH);
    Servo3.write(90);
    delay(2000);
    }

void printK(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

		digitalWrite(4,HIGH);
    Servo1.write(90);
    digitalWrite(9,HIGH);
    Servo5.write(90);
    delay(2000);
    }

void printL(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

		digitalWrite(4,HIGH);
    Servo1.write(90);
    digitalWrite(9,HIGH);
    Servo5.write(90);
    digitalWrite(6,HIGH);
    Servo3.write(90);
    delay(2000);
    }

void printM(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

		digitalWrite(4,HIGH);
    Servo1.write(90);
    digitalWrite(5,HIGH);
    Servo2.write(90);
    digitalWrite(9,HIGH);
    Servo5.write(90);
    delay(2000);
    }

void printN(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

		digitalWrite(4,HIGH);
    Servo1.write(90);
    digitalWrite(5,HIGH);
    Servo2.write(90);
    digitalWrite(7,HIGH);
    Servo4.write(90);
    digitalWrite(9,HIGH);
    Servo5.write(90);
    delay(2000);
    }

void printO(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

		digitalWrite(4,HIGH);
    Servo1.write(90);
    digitalWrite(7,HIGH);
    Servo4.write(90);
    digitalWrite(9,HIGH);
    Servo5.write(90);
    delay(2000);
    }

void printP(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

		digitalWrite(4,HIGH);
    Servo1.write(90);
    digitalWrite(5,HIGH);
    Servo2.write(90);
    digitalWrite(6,HIGH);
    Servo3.write(90);
    digitalWrite(9,HIGH);
    Servo5.write(90);
    delay(2000);
    }

void printQ(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

		digitalWrite(4,HIGH);
    Servo1.write(90);
    digitalWrite(5,HIGH);
    Servo2.write(90);
    digitalWrite(6,HIGH);
    Servo3.write(90);
    digitalWrite(7,HIGH);
    Servo4.write(90);
    digitalWrite(9,HIGH);
    Servo5.write(90);
    delay(2000);
    }

void printR(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

		digitalWrite(4,HIGH);
    Servo1.write(90);
    digitalWrite(7,HIGH);
    Servo4.write(90);
    digitalWrite(6,HIGH);
    Servo3.write(90);
    digitalWrite(9,HIGH);
    Servo5.write(90);
    delay(2000);
    }

void printS(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

		digitalWrite(5,HIGH);
    Servo2.write(90);
    digitalWrite(6,HIGH);
    Servo3.write(90);
    digitalWrite(9,HIGH);
    Servo5.write(90);
    delay(2000);
    }

void printT(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

		digitalWrite(5,HIGH);
    Servo2.write(90);
    digitalWrite(6,HIGH);
    Servo3.write(90);
    digitalWrite(7,HIGH);
    Servo4.write(90);
    digitalWrite(9,HIGH);
    Servo5.write(90);
    delay(2000);
    }

void printU(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

		digitalWrite(5,HIGH);
    Servo2.write(90);
    digitalWrite(9,HIGH);
    Servo5.write(90);
    digitalWrite(10,HIGH);
    Servo6.write(90);
    delay(2000);
    }

void printV(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

		digitalWrite(4,HIGH);
    Servo1.write(90);
    digitalWrite(9,HIGH);
    Servo5.write(90);
    digitalWrite(6,HIGH);
    Servo3.write(90);
    digitalWrite(10,HIGH);
    Servo6.write(90);
    delay(2000);
    }

void printW(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

		digitalWrite(5,HIGH);
    Servo2.write(90);
    digitalWrite(7,HIGH);
    Servo4.write(90);
    digitalWrite(6,HIGH);
    Servo3.write(90);
    digitalWrite(10,HIGH);
    Servo6.write(90);
    delay(2000);
    }

void printX(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

		digitalWrite(4,HIGH);
    Servo1.write(90);
    digitalWrite(5,HIGH);
    Servo2.write(90);
    digitalWrite(9,HIGH);
    Servo5.write(90);
    digitalWrite(10,HIGH);
    Servo6.write(90);
    delay(2000);
    }

void printY(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

		digitalWrite(4,HIGH);
    Servo1.write(90);
    digitalWrite(5,HIGH);
    Servo2.write(90);
    digitalWrite(7,HIGH);
    Servo4.write(90);
    digitalWrite(9,HIGH);
    Servo5.write(90);
    digitalWrite(10,HIGH);
    Servo6.write(90);
    delay(2000);
    }

void printZ(){
    digitalWrite(4,LOW);
    Servo1.write(0);
    digitalWrite(5,LOW);
    Servo2.write(0);
    digitalWrite(6,LOW);
    Servo3.write(0);
    digitalWrite(7,LOW);
    Servo4.write(0);
    digitalWrite(9,LOW);
    Servo5.write(0);
    digitalWrite(10,LOW);
    Servo6.write(0);

		digitalWrite(4,HIGH);
    Servo1.write(90);
    digitalWrite(7,HIGH);
    Servo4.write(90);
    digitalWrite(9,HIGH);
    Servo5.write(90);
    digitalWrite(10,HIGH);
    Servo6.write(90);
    delay(2000);
    }
 
void loop() {

  char text[10] = {'h','e','l','l','o','w','o','r','l','d'};
  
  for(int i = 0; i < 10; i++){

    if (text[i]=='a'){
      printA();
    }
    else if (text[i]=='b'){
      printB();
    }
    else if (text[i]=='c'){
      printC();
    }
    else if (text[i]=='d'){
      printD();
    }
    else if (text[i]=='e'){
      printE();
    }
    else if (text[i]=='f'){
      printF();
    }
    else if (text[i]=='g'){
      printG();
    }
    else if (text[i]=='h'){
      printH();
    }
    else if (text[i]=='i'){
      printI();
    }
    else if (text[i]=='j'){
      printJ();
    }
    else if (text[i]=='k'){
      printK();
    }
    else if (text[i]=='l'){
      printM();
    }
    else if (text[i]=='n'){
      printO();
    }
    else if (text[i]=='p'){
      printQ();
    }
    else if (text[i]=='r'){
      printR();
    }
    else if (text[i]=='s'){
      printS();
    }
    else if (text[i]=='t'){
      printT();
    }
    else if (text[i]=='u'){
      printU();
    }
    else if (text[i]=='v'){
      printV();
    }
    else if (text[i]=='w'){
      printW();
    }
    else if (text[i]=='x'){
      printX();
    }
    else if (text[i]=='y'){
      printY();
    }
    else if (text[i]=='z'){
      printZ();
    }
  }
  // put your main code here, to run repeatedly:
  delay(1); // this speeds up the simulation
}
