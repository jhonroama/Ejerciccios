#include <Arduino.h>
#include <DataCapture.h>

using namespace DataCapture;

int potencia (int, int);
int base, exponente, x, y;

void setup() {

  Serial.begin(9600);
  Serial.println();
  base = captureInteger ("Digite el valor de la base: " );
  exponente = captureInteger ("Digite el exponente: " );
  Serial.println("Potencia de " + String(base) + "elevado a " + String(exponente) + " es " + String(potencia(base, exponente)));
}
int potencia (int x, int y){ 
  int pot;
  if (y==1){
    pot = x;
  }
  else{
    pot = x * potencia (x, y-1);
  }
}
void loop() {

}
