//Funcion para leer el estado de los pulsadores
void leerTeclado() {
  a = digitalRead(A);
  b = digitalRead(B);
  c = digitalRead(C);
  d = digitalRead(D);

  if (a == true && b == false && c == false && d == false) {
    clave_in = teclado[0];
    pitido(BUZZ, 1, TIEMPO2);
    while (a == true) {
      a = digitalRead(A);
      delay(50);
    }
  }
  else if (a == false && b == true && c == false && d == false) {
    clave_in = teclado[1];
    pitido(BUZZ, 1, TIEMPO2);
    while (b == true) {
      b = digitalRead(B);
      delay(50);
    }
  }
  else  if (a == false && b == false && c == true && d == false) {
    clave_in = teclado[2];
    pitido(BUZZ, 1, TIEMPO2);
    while (c == true) {
      c = digitalRead(C);
      delay(50);
    }
  }
  else  if (a == false && b == false && c == false && d == true) {
    clave_in = teclado[3];
    pitido(BUZZ, 1, TIEMPO2);
    while (d == true) {
      d = digitalRead(D);
      delay(50);
    }
  }
  else {
    clave_in = 0;
  }
}
//------------------------------------------------------------

//Funcion para leer las entradas de la maquina
void leerEntrada() {
  entradaActual = entrada::DESCONOCIDO;
  leerTeclado();

  if (clave_in == clave[0] && estadoActual == estado::ESPERA_DIGITO1) {
    entradaActual = entrada::CORRECTO;
  }
  else if (clave_in == clave[1] && estadoActual == estado::ESPERA_DIGITO2) {
    entradaActual = entrada::CORRECTO;
  }
  else if (clave_in == clave[2] && estadoActual == estado::ESPERA_DIGITO3) {
    entradaActual = entrada::CORRECTO;
  }
  else if (clave_in == clave[3] && estadoActual == estado::ESPERA_DIGITO4) {
    entradaActual = entrada::CORRECTO;
  }
  else if (contador == TIEMPO) {
    entradaActual = entrada::TEMPORIZADOR;
    contador = 0;
  }
  else if (clave_in != 0) {
    entradaActual = entrada::INCORRECTO;
  }
}
//-------------------------------------------------------------

void contarTiempo() {
  if (contar == true) {
    contador++;
  }
}
//--------------------------------------------------------------
