//Funcion para actualizar los estados de la maquina
void actualizaEstado() {
  switch (estadoActual) {
    case ESPERA_DIGITO1:
      estado_digito1();
      break;

    case ESPERA_DIGITO2:
      estado_digito2();
      break;

    case ESPERA_DIGITO3:
      estado_digito3();
      break;

    case ESPERA_DIGITO4:
      estado_digito4();
      break;

    case CLAVE_CORRECTA:
      estado_clave_correcta();
      break;
  }
}
//-------------------------------------------------------------

// Funcion que cambia el estado y dispara las transiciones
void cambiaEstado(int nuevoEstado) {
  estadoActual = nuevoEstado;

  switch (estadoActual) {
    case estado::ESPERA_DIGITO1:
      salida_espera_digito1();
      break;

    case estado::ESPERA_DIGITO2:
      salida_espera_digito2();
      break;

    case estado::ESPERA_DIGITO3:
      salida_espera_digito3();
      break;

    case estado::ESPERA_DIGITO4:
      salida_espera_digito4();
      break;

    case estado::CLAVE_CORRECTA:
      salida_clave_correcta();
      break;

    default:
      break;
  }
}
//----------------------------------------------------------------

//Acciones a tomar en cada estado y condiciones de transicion
void estado_digito1() {
  if (entradaActual == entrada::CORRECTO) {
    cambiaEstado(estado::ESPERA_DIGITO2);
  }
  if (entradaActual == entrada::INCORRECTO) {
    cambiaEstado(estado::ESPERA_DIGITO1);
  }
}
//-----------------------------------------------------------------

void estado_digito2() {
  if (entradaActual == entrada::CORRECTO) {
    cambiaEstado(estado::ESPERA_DIGITO3);
  }
  if (entradaActual == entrada::INCORRECTO) {
    cambiaEstado(estado::ESPERA_DIGITO1);
  }
}
//-----------------------------------------------------------------

void estado_digito3() {
  if (entradaActual == entrada::CORRECTO) {
    cambiaEstado(estado::ESPERA_DIGITO4);
  }
  if (entradaActual == entrada::INCORRECTO) {
    cambiaEstado(estado::ESPERA_DIGITO1);
  }
}
//-----------------------------------------------------------------

void estado_digito4() {
  if (entradaActual == entrada::CORRECTO) {
    cambiaEstado(estado::CLAVE_CORRECTA);
  }
  if (entradaActual == entrada::INCORRECTO) {
    pitido(BUZZ, 2, TIEMPO3);
    cambiaEstado(estado::ESPERA_DIGITO1);
  }
}
//-----------------------------------------------------------------

void estado_clave_correcta() {
  if (entradaActual == entrada::TEMPORIZADOR) {
    cambiaEstado(estado::ESPERA_DIGITO1);
  }
}
//-----------------------------------------------------------------
