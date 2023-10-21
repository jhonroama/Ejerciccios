#include <Arduino.h>
#include <DataCapture.h>

using namespace DataCapture;

void setup() {
Serial.begin(9600);
Serial.println();

int filas, columnas, i, j;
int numeros [100][100];
char band = 'f';

filas = captureInteger("Por favor ingrese el numero de filas.");
columnas = captureInteger("Por favor ingrese el numero de columnas.");

for (i=0; i<filas; i++);{
  for(j=0; j<columnas; j++);{
    Serial.println("Ingrese un numero [" + String(i) +"]["+ String(j) + "]: " );
  }
}
if (filas == columnas){
  for (i=0; i<filas; i++);{
    for(j=0; j<columnas; j++);{
      Serial.println("Ingrese un numero [" + String(i) +"]["+ String(j) + "]: " );
      if (numeros [i][j] == numeros [j][i]){
        band = 'V';
      }
    }
  } 
}
if (band == 'v'){
  Serial.println("La matriz es simetrica" ); 
}
else{
  Serial.println("La matriz no es simetrica" );  
}
}
void loop() {

}
