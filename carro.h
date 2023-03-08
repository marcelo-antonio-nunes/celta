#ifndef _CAR_H
#define _CAR_H

#include<Arduino.h>
#include "DFRobotDFPlayerMini.h"
#include "SoftwareSerial.h"



class Car {
    public:
        Car();	    
        bool monitoraSeOCarroFoiLigado();
        bool monitoraOrrenteDoCarro();
        bool monitoraPortaMotorista(int audio);
        bool monitoraPortaCarrona(int audio);
        bool monitoraPortaPassageiroDireta(int audio);
        bool monitoraPortaPassageiroEsquerda(int audio);
        bool monitoraPortaMala(int audio);
        bool monitoraFreioDeMao(int audio);
        bool monitoraChaveNaIgnicao(int audio);
        bool monitoraFarolLigado(int audio);
        bool monitoraLimpadorDeParabrisa(int audio);
        bool monitoraSetaDeireitaLigada(int audio);
        bool monitoraSetaEsquerdaLigada(int audio);
        bool monitoraTemperatuda(int audio);
        bool monitoraOleo(int audio);//feito
        void setaPinoPortaMotorista(int pino);//feito
        void setaPinoPortaCarrona(int pino);//feito
        void setaPinoPortaPassageiroDireta(int pino);//feito
        void setaPinoPortaPassageiroEsquerda(int pino);//feito
        void setaPinoPortaMala(int pino);//feito
        void setaPinoFreioDeMao(int pino);//feito
        void setaPinoChaveNaIgnicao(int pino);//feito
        void setaPinoFarolLigado(int pino);//feito
        void setaPinoLimpadorDeParabrisa(int pino);//feito
        void setaPinoSetaDeireitaLigada(int pino);//feito
        void setaPinoSetaEsquerdaLigada(int pino);//feito
        void setaPinoTemperatuda(int pino);//feito
        void setaPinoOleo(int pino);//feito
        void setPinoDoCortaCorrente(int pin);   
        void setaPinoDoSensorDeCorrente(int pino);
        // void temporizador(void (*funcao)(), unsigned long intervalo);
    private:
        int  _PINO_DO_SENSOR_CORTACORRENTE;
        int  _PINO_SENSOR_PORTA_MOTORISTA;
        int  _PINO_SENSOR_PORTA_CARONA;
        int  _PINO_SENSOR_PORTA_PASSAGEIRO_DIREITA;
        int  _PINO_SENSOR_PASSAGEIRO_ESQUERDA;
        int  _PINO_SENSOR_PORTA_MALA;
        int  _PINO_SENSOR_FREIO_DE_MAO;
        int  _PINO_SENSOR_CHAVE_NA_IGNICAO;
        int  _PINO_SENSOR_FAROL_LIGADO;
        int  _PINO_SENSOR_LIMPADOR_DE_PARABRISA;
        int  _PINO_SENSOR_SETA_DIREITA_LIGADA;
        int  _PINO_SENSOR_SETA_ESQUERDA_LIGADA;
        int  _PINO_SENSOR_TEMPERATURA;
        int  _PINO_SENSOR_DE_OLEO;
        int  _PINO_DO_SENSOR_CORTA_CORRENTE ;
        bool _CORRENTE_DO_CARRO_CORTADA = false;
};


#endif