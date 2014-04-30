#include <reg52.h>

#define DISTANCIA_MAXIMA_SENSOR 2000

#define DISTANCIA_LIMITE_SENSOR_FRENTE 200
#define DISTANCIA_LIMITE_SENSOR_ESQUERDA 200
#define DISTANCIA_LIMITE_SENSOR_DIREITA 200

// Leds da placa (estão acesos em sinal negativo (LED_VM = 0) ):
at 0x90 sbit LED_VM;
at 0x91 sbit LED_AM;
at 0x92 sbit LED_VD; 

// Saida para os motores:
at 0xB3 sbit motor1_1;
at 0xB4 sbit motor1_2;
at 0xB6 sbit motor2_1;
at 0xB7 sbit motor2_2;

// Para ligar os motores.
at 0xB3 sbit motor1; 
at 0xB5 sbit motor2;
	
// Echo dos Sensores:
at 0xA1 sbit eco_esq;
at 0xA2 sbit eco_fro;
at 0xA3 sbit eco_dir;

//Totalizadores de sensor
long int sen_esq = 0;
long int sen_fro = 0;
long int sen_dir = 0;

long int wait = 0;


// Trigger para os sensores:
at 0xA0 sbit trigger;

#include "delay.h"
#include "sensor.h"
#include "led.h"
#include "motor.h"
#include "movimento.h"
