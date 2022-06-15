/*
  Μέτρα την τάση της μπαταρίας μέσω της αναλογικής θύρας
  και στείλε το αποτέλεσμα στην εφαρμογή του κινητού τηλεφώνου (App-Inventor)
*/

float diabase_tasi_analogika(const int akida_thiras) {
  // Measures analog input on pin 0, converts it to voltage. MAX Voltage to pins is +5V.
  // Convert the int analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  return analogRead(akida_thiras) * 5. / 1023.;
}
//========================================================================================

unsigned long teleytaia_stigmi = millis();

void metra_bataria(const unsigned int periodos) {
  if ( millis()-teleytaia_stigmi >= periodos ) {
    const float volt = diabase_tasi_analogika(A0);
    const byte decata = volt * 10;
    // Serial.println ((String)"volt = " + volt + ", decata volt = " + decata);
    teleytaia_stigmi = millis();
    
    if (BTserial.isListening()) { 
      // στείλε το αποτέλεσμα ασύρματα, μέσω bluetooth
      BTserial.write(decata);  // write, not print !
    }
  }
}
