void salida_espera_digito1() {
  contar = false;
  digitalWrite(BUZZ, LOW);
  digitalWrite(RELE, OFF);
  Serial.println("esperando digito 1");
  Serial.flush();
}
//---------------------------------------------------------

void salida_espera_digito2() {
  digitalWrite(RELE, OFF);
  Serial.println("esperando digito 2");
  Serial.flush();
}
//----------------------------------------------------------

void salida_espera_digito3() {
  digitalWrite(RELE, OFF);
  Serial.println("esperando digito 3");
  Serial.flush();
}
//---------------------------------------------------------

void salida_espera_digito4() {
  digitalWrite(RELE, OFF);
  Serial.println("esperando digito 4");
  Serial.flush();
}
//---------------------------------------------------------

void salida_clave_correcta() {
  contar = true;
  digitalWrite(BUZZ, HIGH);
  digitalWrite(RELE, ON);
  Serial.println("Clave corecta: activando Rele");
  Serial.flush();
}
//---------------------------------------------------------

//Funcion para activar los pitidos del zumbador a diferentes frecuencias
void pitido(uint8_t pin, uint8_t num_pitidos, int tiempo) {
  //Realizamos el numero de pitidos que ingrese el usuario
  for (int i = 0; i < num_pitidos; i++) {
    digitalWrite(pin, HIGH);
    delay(tiempo);
    digitalWrite(pin, LOW);
    delay(tiempo);
  }
}
//-------------------------------------------------------------
