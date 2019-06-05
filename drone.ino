#include <SoftwareSerial.h>

int pinMoteurD=5;
int pinMoteurG=6;

SoftwareSerial hc06(2,3);
String ordre;

void setup(){
  //Initialize Serial Monitor
  Serial.begin(9600);
  hc06.begin(9600);
  pinMode(pinMoteurD, OUTPUT);
  pinMode(pinMoteurD, OUTPUT);
  
}

void loop(){


  
  while (hc06.available())
  {

    delay(3);

    char c=(hc06.read());
    ordre += c;
    
    }



    
  
  
  if (ordre =="avancer"){
        Serial.println(ordre);
    Serial.println("La voiture avance");
    analogWrite(pinMoteurD, 200);
    analogWrite(pinMoteurG, 200);

  }


if (ordre =="stop"){
        Serial.println(ordre);
    Serial.println("La voiture s'arrete");
        analogWrite(pinMoteurD, 0);
    analogWrite(pinMoteurG, 0);

  }

  if (ordre =="droite"){
        Serial.println(ordre);
    Serial.println("La voiture tourne a droite");
        analogWrite(pinMoteurD, 0);
    analogWrite(pinMoteurG, 255);

  }

  if (ordre =="gauche"){
    Serial.println(ordre);
    Serial.println("La voiture tourne a droite");
    analogWrite(pinMoteurD, 255);
    analogWrite(pinMoteurG, 0);
    
  }

    if (ordre!="")
  {

    ordre="";

  
  }

}


  
  

  
