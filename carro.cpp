#include <Arduino.h>
#include "carro.h"

Car::Car()
{
}
bool Car::monitoraSeOCarroFoiLigado()
{
    return _PINO_DO_SENSOR_CORTA_CORRENTE;
}
bool Car::monitoraOrrenteDoCarro()
{
    return _CORRENTE_DO_CARRO_CORTADA;
}
bool Car::monitoraPortaMotorista(int audio)
{
    if (_PINO_SENSOR_PORTA_MOTORISTA)
    {
    }
    return _PINO_SENSOR_PORTA_MOTORISTA;
}
bool Car::monitoraPortaCarrona(int audio)
{
    if (_PINO_SENSOR_PORTA_CARONA)
    {
    }
    return _PINO_SENSOR_PORTA_CARONA;
}
bool Car::monitoraPortaPassageiroDireta(int audio)
{
    if (_PINO_SENSOR_PORTA_PASSAGEIRO_DIREITA)
    {
    }
    return _PINO_SENSOR_PORTA_PASSAGEIRO_DIREITA;
}
bool Car::monitoraPortaPassageiroEsquerda(int audio)
{
    if (_PINO_SENSOR_PASSAGEIRO_ESQUERDA)
    {
    }
    return _PINO_SENSOR_PASSAGEIRO_ESQUERDA;
}
bool Car::monitoraPortaMala(int audio)
{
    if (_PINO_SENSOR_PORTA_MALA)
    {
    }
    return _PINO_SENSOR_PORTA_MALA;
}
bool Car::monitoraFreioDeMao(int audio)
{
    if (_PINO_SENSOR_FREIO_DE_MAO)
    {
    }
    return _PINO_SENSOR_FREIO_DE_MAO;
}
bool Car::monitoraChaveNaIgnicao(int audio)
{
    if (_PINO_SENSOR_CHAVE_NA_IGNICAO)
    {
    }
    return _PINO_SENSOR_CHAVE_NA_IGNICAO;
}
bool Car::monitoraFarolLigado(int audio)
{
    if (_PINO_SENSOR_FAROL_LIGADO)
    {
    }
    return _PINO_SENSOR_FAROL_LIGADO;
}
bool Car::monitoraLimpadorDeParabrisa(int audio)
{
    if (_PINO_SENSOR_LIMPADOR_DE_PARABRISA)
    {
    }
    return _PINO_SENSOR_LIMPADOR_DE_PARABRISA;
}
bool Car::monitoraSetaDeireitaLigada(int audio)
{
    if (_PINO_SENSOR_SETA_DIREITA_LIGADA)
    {
    }
    return _PINO_SENSOR_SETA_DIREITA_LIGADA;
}
bool Car::monitoraSetaEsquerdaLigada(int audio)
{
    if (_PINO_SENSOR_SETA_ESQUERDA_LIGADA)
    {
    }
    return _PINO_SENSOR_SETA_ESQUERDA_LIGADA;
}
bool Car::monitoraTemperatuda(int audio)
{
    if (_PINO_SENSOR_TEMPERATURA)
    {
    }
    return _PINO_SENSOR_TEMPERATURA;
}
bool Car::monitoraOleo(int audio)
{
    if (_PINO_SENSOR_DE_OLEO)
    {
    }
    return _PINO_SENSOR_DE_OLEO;
}
void Car::setaPinoPortaMotorista(int pino)
{
    pinMode(pino, INPUT);
    _PINO_SENSOR_PORTA_MOTORISTA = pino;
}
void Car::setaPinoPortaCarrona(int pino)
{
    pinMode(pino, INPUT);
    _PINO_SENSOR_PORTA_CARONA = pino;
}
void Car::setaPinoPortaPassageiroDireta(int pino)
{
    pinMode(pino, INPUT);
    _PINO_SENSOR_PORTA_PASSAGEIRO_DIREITA = pino;
}
void Car::setaPinoPortaPassageiroEsquerda(int pino)
{
    pinMode(pino, INPUT);
    _PINO_SENSOR_PASSAGEIRO_ESQUERDA = pino;
}
void Car::setaPinoPortaMala(int pino)
{
    pinMode(pino, INPUT);
    _PINO_SENSOR_PORTA_MALA = pino;
}
void Car::setaPinoFreioDeMao(int pino)
{
    pinMode(pino, INPUT);
    _PINO_SENSOR_FREIO_DE_MAO = pino;
}
void Car::setaPinoChaveNaIgnicao(int pino)
{
    pinMode(pino, INPUT);
    _PINO_SENSOR_CHAVE_NA_IGNICAO = pino;
}
void Car::setaPinoFarolLigado(int pino)
{
    pinMode(pino, INPUT);
    _PINO_SENSOR_FAROL_LIGADO = pino;
}
void Car::setaPinoLimpadorDeParabrisa(int pino)
{
    pinMode(pino, INPUT);
    _PINO_SENSOR_LIMPADOR_DE_PARABRISA = pino;
}
void Car::setaPinoSetaDeireitaLigada(int pino)
{
    pinMode(pino, INPUT);
    _PINO_SENSOR_SETA_DIREITA_LIGADA = pino;
}
void Car::setaPinoSetaEsquerdaLigada(int pino)
{
    pinMode(pino, INPUT);
    _PINO_SENSOR_PASSAGEIRO_ESQUERDA = pino;
}
void Car::setaPinoTemperatuda(int pino)
{
    pinMode(pino, INPUT);
    _PINO_SENSOR_TEMPERATURA = pino;
}
void Car::setaPinoOleo(int pino)
{
    pinMode(pino, INPUT);
    _PINO_SENSOR_DE_OLEO = pino;
}

void Car::setPinoDoCortaCorrente(int pino)
{
    pinMode(pino, INPUT);
    _PINO_DO_SENSOR_CORTA_CORRENTE = pino;
}
void Car::setaPinoDoSensorDeCorrente(int pino)
{
    _PINO_DO_SENSOR_CORTA_CORRENTE = pino;
    pinMode(_PINO_DO_SENSOR_CORTACORRENTE, INPUT);
}
