#include <Arduino.h>
#include <carro.h>
#include <SoftwareSerial.h>

#define pinRx 10
#define pinTx 11
#define volumeMP3 30

SoftwareSerial playerMP3Serial(pinRx, pinTx);
void inicializacao_do_carro();
void cortacorrente();
Car celta = Car();
void setup()
{
  playerMP3Serial.begin(9600);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  celta.setaPinoDoSensorDeCorrente(8);
}

void loop()
{
  Serial.println(F("LEGAL"));
}
void cortacorrente()
{
}
void inicializacao_do_carro()
{
  if (celta.monitoraOrrenteDoCarro() && celta.monitoraSeOCarroFoiLigado())
  {
    if (celta.monitoraChaveNaIgnicao(000))
    {
      //coloque aqui as funções a ser executadas
      // TODO
    }
    if (celta.monitoraFreioDeMao(001))
    {
      //coloque aqui as funções a ser executadas
      // TODO
    }
    if (celta.monitoraPortaMotorista(002))
    {
      //coloque aqui as funções a ser executadas
      // TODO
    }
    if (celta.monitoraPortaCarrona(003))
    {
      //coloque aqui as funções a ser executadas
      // TODO
    }
    if (celta.monitoraPortaPassageiroDireta(004))
    {
      //coloque aqui as funções a ser executadas
      // TODO
    }
    if (celta.monitoraPortaPassageiroEsquerda(005))
    {
      //coloque aqui as funções a ser executadas
      // TODO
    }
    if (celta.monitoraPortaMala(006))
    {
      //coloque aqui as funções a ser executadas
      // TODO
    }
    if (celta.monitoraSetaDeireitaLigada(007))
    {
      //coloque aqui as funções a ser executadas
      // TODO
    }
    if (celta.monitoraSetaEsquerdaLigada(8))
    {
      //coloque aqui as funções a ser executadas
      // TODO
    }
    if (celta.monitoraTemperatuda(9))
    {
      //coloque aqui as funções a ser executadas
      // TODO
    }
  }
}
