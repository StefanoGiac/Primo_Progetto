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
int resto;


// put function declarations here:
float myFunction(float, float);
float result;

void setup() {
  // put your setup code here, to run once:
  pinMode(LedPin,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  digitalWrite(LedPin,HIGH);
  delay(500);
  digitalWrite(LedPin,LOW);
  delay(500);

  esperimento +=contatore;
  resto = calcolo_resto (contatore,5);
  Serial.print ("Resto = ");
  Serial.println (resto);

  result=myFunction(2,3);

  contatore +=1;
}

// put function definitions here:
float myFunction(float x, float y) 
{
  return x * y;
}