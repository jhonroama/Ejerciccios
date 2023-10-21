#include <Arduino.h>
#include <DataCapture.h>

using namespace DataCapture;
int inicial_saldo=1000;
int terminar;
int opc;
float total_=0;
float retirar_dinero, ingreso, saldo_final;

void setup() {
  Serial.begin(9600);
  Serial.println();

  Serial.println("Te damos la bienvenida tu cajero virtual. En que te podemos ayudar:" );
  Serial.println("1. Ingresar dinero en cuenta." );
  Serial.println("2. Retirar dinero de tu cuenta." );
  Serial.println("3. Finalizar transaccion." );
  opc;

  switch (opc){
    case 1:
      ingreso = captureInteger("Digite la cantidad de dinero a ingresar: " );
      total_ = inicial_saldo + ingreso;
      Serial.println("El saldo total de su cuenta es de: " + String(total_));
    break;
    case 2:
      retirar_dinero = captureInteger("Que cantidad de dinero desea retirar: ");
      if (retirar_dinero > inicial_saldo){
        Serial.println("Saldo insuficiente, por favor intente de nuevo." );
      }
      else{
        saldo_final = inicial_saldo - retirar_dinero;
        Serial.println("El saldo en tu cuenta ahora es de: " + String(saldo_final));
      }
    break;
    case 3:
      Serial.println("Gracias por preferirnos, esperamos que regrese pronto." );
    break;
  }
}

void loop() {

}
