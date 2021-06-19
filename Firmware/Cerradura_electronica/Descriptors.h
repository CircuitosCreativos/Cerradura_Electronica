#ifndef __Descriptors_H__
#define __Descriptors_H__

//Definimos los pines necesarios para controlar el hardware
//pines de entrada para la clave
#define A       6
#define B       5
#define C       8
#define D       7

//pin salida rele
#define RELE    3

//Buzzer
#define BUZZ    13

//Parametros constantes
//Estados del rele
#define OFF     HIGH
#define ON      LOW

#define TIEMPO2     20      //Retardo pitidos teclado
#define TIEMPO3     100     //Retardo pitidos clave incorrecta

//Parametros del timer
#define DISPARO     100000 //Tiempo en microsegundos
#define TIEMPO      40     //Incremento del contador para 4 segundos

#endif
