#include <SoftwareSerial.h>

SoftwareSerial hc06(2,3);
String ordre;

void setup(){
  //Initialize Serial Monitor
  Serial.begin(9600);
  hc06.begin(9600);

  
}

void loop(){

  ordre="";
  
  while (hc06.available())
  {

    delay(3);

    char c=(hc06.read());
    ordre += c;
    
    }



    
  
  
  if (ordre =="avancer"){
        Serial.println(ordre);
    Serial.println("Ok");

  }


if (ordre =="reculer"){
        Serial.println(ordre);
    Serial.println("Nan");

  }

  if (ordre =="droite"){
        Serial.println(ordre);
    Serial.println("arf");

  }

  if (ordre =="gauche"){
    Serial.println(ordre);
    Serial.println("wow");
    
  }

    if (ordre!="")
  {

    ordre="";

  
  }

}


  
  

  
