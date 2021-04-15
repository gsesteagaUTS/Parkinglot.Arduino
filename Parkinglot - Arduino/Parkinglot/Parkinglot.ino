

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  //mySerial.begin(9600);
}
bool value = true;
String msg= "";
void loop(){

  
  
  while(Serial.available()>0){
    msg += (char) Serial.read();
    //msg = msg + (char) Serial.read();
    //Serial.println(Serial.read());
    digitalWrite(13, value);
    delay(1000);
    value=!value;
    ;
  }
}

/*//#include <SoftwareSerial.h>

#include <ArduinoJson.h>

#include <Servo.h>
//SoftwareSerial  mySerial(2,3); // RX, TX
int led = 13;
int containmentBarEntryIRPin = 2;
Servo containmentBarEntry;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //mySerial.begin(9600);
  pinMode(13,OUTPUT);
  //containmentBarEntry.attach(5);
}
bool value=true;
String msg = "";
void loop() {
  //mySerial.println("Hola");
  if(Serial.available()){
    digitalWrite(13, value);
    value = !value;
    delay(10);
    msg = Serial.readString(); // {"p":3,"v":90}
    //Serial.println(msg);
    //mySerial.println("Hola");
    /*DynamicJsonDocument doc(100);
    
    DeserializationError error = deserializeJson(doc, msg);
  
    if(error){
      mySerial.print(F("deserializeJson() failed: "));
      mySerial.println(error.f_str());
      return;
    }
   
  
    int pin = doc["p"];//Cuando el tipo de dato es el que necesito
    int value = doc["v"];//String pin2 = doc.get<String>("p");//Cuando el tipo de dato NO es el que necesito
      
    if(pin>13){
      //Analogico
      analogWrite(pin, value);
    }
    else{
      //Digital
      digitalWrite(pin, value);
    }*
  }
}*/
