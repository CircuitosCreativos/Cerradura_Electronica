/*
  Project : Cerradura electronica
  Version : 1.0
  Date    : 09/08/2018-22/08/2018
  Author  : Carlos Andres Betancourt
  Company : Circuitos Creativos SAS
  Comments: Cerradura electronica con clave de 4 digitos

  Chip type               : ATmega328P-AU
  Program type            : Application
  AVR Core Clock frequency: 16.0MHz
  Memory model            : Small
  External RAM size       : 0
  Data Stack size         : 512
  commit: Cerradura electronica con clave de 4 digitos
  ------------------------------------------------------------*/

//Incluimos las librerias y archivos de cabecera necesarios
#include "Descriptors.h"
#include <TimerOne.h>
//-------------------------------------------------------------

//Instanciamos los objetos de las librerias

//-------------------------------------------------------------

//Declaramos las variables globales necesarias
//Enumeracion para las entradas de la maquina
enum entrada {
  DESCONOCIDO,
  INCORRECTO,
  CORRECTO,
  TEMPORIZADOR
};

//Enumeracion para los estados de la maquina
enum estado {
  ESPERA_DIGITO1,
  ESPERA_DIGITO2,
  ESPERA_DIGITO3,
  ESPERA_DIGITO4,
  CLAVE_CORRECTA
};

//Variables globales
entrada entradaActual;
estado estadoActual;

boolean contar = false;
boolean a = false;
boolean b = false;
boolean c = false;
boolean d = false;
char teclado[] = {'1', '2', '3', '4'}; //(solo cambiar si se cambia de teclado)
char clave[] = {'2', '3', '1', '4'}; //Aqui se asigna la clave del sistema
char clave_in; //almacena la clave que ingresa el usuario con el teclado
int contador = 0;
//-------------------------------------------------------------

void setup() {
  Serial.begin(9600);
  Timer1.initialize(DISPARO);
  Timer1.attachInterrupt(contarTiempo);

  pinMode(RELE, OUTPUT);
  pinMode(A, INPUT);
  pinMode(B, INPUT);
  pinMode(C, INPUT);
  pinMode(D, INPUT);

  digitalWrite(RELE, LOW);

  estadoActual = ESPERA_DIGITO1;
  salida_espera_digito1();
}
//-------------------------------------------------------------

void loop() {
  leerEntrada();
  actualizaEstado();
}