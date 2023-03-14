#include <DFRobot_SIM808.h>
#include <sim808.h>
#define Largo_mensaje 150
DFRobot_SIM808 sim808(&Serial);
//declarar variables sim808
char mensaje[Largo_mensaje];
int Numero_de_mensajes=0;
char telefono[16];


void setup() {
Serial.begin(9600);
while (!sim808.init())
{
  Serial.println("ERROR AL INICIAR SIM808");
  delay(1000);
  }
delay (1000);
Serial.println("SIM808 INICIADO ");
}

void loop() {

Numero_de_mensajes=sim808.isSMSunread();
Serial.print("numero de mensajes en Buzon de entrada:  ");
Serial.println(Numero_de_mensajes);
if (Numero_de_mensajes>0){
  sim808.readSMS(Numero_de_mensaje, Mensaje,Largo_mensaje, telefono,fecha);
sim808.deleteSMS(Numero_de_mensajes);
Serial.print("Mensaje del Numero:  ");
Serial.println(telefono);
Serial.print("Mensaje:   ");
Serial.println(mensaje);

}

}
