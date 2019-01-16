void salida_espera_digito1() {
  contar = false;
  digitalWrite(RELE, LOW);
  Serial.println("esperando digito 1");
}
//---------------------------------------------------------

void salida_espera_digito2() {
  digitalWrite(RELE, LOW);
  Serial.println("esperando digito 2");
}
//----------------------------------------------------------

void salida_espera_digito3() {
  digitalWrite(RELE, LOW);
  Serial.println("esperando digito 3");
}
//---------------------------------------------------------

void salida_espera_digito4() {
  digitalWrite(RELE, LOW);
  Serial.println("esperando digito 4");
}
//---------------------------------------------------------

void salida_clave_correcta() {
  contar = true;
  digitalWrite(RELE, HIGH);
  Serial.println("Clave corecta: activando Rele");
}
//---------------------------------------------------------
