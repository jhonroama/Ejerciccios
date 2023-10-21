#include <Arduino.h>
#include <DataCapture.h>

using namespace DataCapture;

float promedio_estudiante;

struct promedio{
  float nota_1, nota_2, nota_3;
};

struct estudiante{
  char nombre[20];
  char sexo[10];
  int edad;
  struct promedio prom;
}estudiante1;

void setup() {
String nombre = DataCapture::captureString("Inserte nombre:");
String sexo = DataCapture::captureString("Inserte su sexo:");
estudiante1.edad = captureInteger("Digite su edad");

Serial.println("Notas del estudiante");
estudiante1.prom.nota_1 = captureInteger("Nota 1: ");
estudiante1.prom.nota_2 = captureInteger("Nota 2: ");
estudiante1.prom.nota_2 = captureInteger("Nota 3: ");

promedio_estudiante = (estudiante1.prom.nota_1 + estudiante1.prom.nota_2 + estudiante1.prom.nota_3)/3;

Serial.println("Datos de l estudiante");
 
Serial.println("Su nombre es: " +String(estudiante1.nombre,20));
Serial.println("Su sexo es: " +String(estudiante1.sexo,10));
Serial.println("Su edad es: " +String(estudiante1.edad));
Serial.println("Su promedio es: " +String(promedio_estudiante));

}

void loop() {

}
