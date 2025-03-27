#include <Arduino.h>
#include "dichiarazione.h"

int LedPin = 13;
int calcolo1;
int calcolo2;
int calcolo3;
int contatore;
int esperimento;
int continua_esperimento;
int continua_esperimento_2;
int continua_esperimento_3;

// put function declarations here:
float myFunction(float, float);

void setup() {
  // put your setup code here, to run once:
  float result = myFunction(2, 3);
  pinMode(LedPin,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  digitalWrite(LedPin,HIGH);
  delay(1000);
  digitalWrite(LedPin,LOW);
  delay(1000);
  calcolo1 = somma(1,2);
  calcolo2 = differenza(5,6);
  calcolo3 = myFunction(1,3);
  Serial.print ("Calcolo1 =");
  Serial.print (calcolo1);
  contatore +=1;
  esperimento +=contatore;
  continua_esperimento += esperimento;
  // faccio una divisione
  calcolo1 = divisione(2,3);
  Serial.println (calcolo1);

}

// put function definitions here:
float myFunction(float x, float y) 
{
  return x * y;
}