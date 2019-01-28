void salida_espera_digito1() {
  contar = false;
  digitalWrite(RELE, OFF);
  Serial.println("esperando digito 1");
}
//---------------------------------------------------------

void salida_espera_digito2() {
  digitalWrite(RELE, OFF);
  Serial.println("esperando digito 2");
}
//----------------------------------------------------------

void salida_espera_digito3() {
  digitalWrite(RELE, OFF);
  Serial.println("esperando digito 3");
}
//---------------------------------------------------------

void salida_espera_digito4() {
  digitalWrite(RELE, OFF);
  Serial.println("esperando digito 4");
}
//---------------------------------------------------------

void salida_clave_correcta() {
  contar = true;
  digitalWrite(RELE, ON);
  Serial.println("Clave corecta: activando Rele");
}
//---------------------------------------------------------
