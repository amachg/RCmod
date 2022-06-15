// Κινεί το αυτοκίνητο με εντολές από εφαρμογή (π.χ. app-inventor
// ΠΡΟΣΟΧΗ, Ο εντοπισμός θέσης πρέπει να είναι ενεργός στο κινητό).
// Η μετάδοση γίνεται ασύρματα μέσω ενός Bluetooth-Low-Emission module,
// πχ. HM-10, συνδεμένο είτε στην υλική σειριακή θύρα ή σε λογισμική θύρα
// (πχ. σε Uno οι ακίδες 2 και 3 που υποστηρίζουν interrupts).

// Περιλαμβάνει τη βιβλιοθήκη "SoftwareSerial" για λογισμική θύρα.
#include <SoftwareSerial.h>

// Αντιστοιχία BLE σε Uno, λογισμιμ. σειριακής: TX-> D3RX, RX<- D2TX
// Σύνδεσεις: BLE TX --> D2 Uno --> RX σειριακής
//                RX <-- D3     <-- TX
SoftwareSerial BTserial(6, 7); //(ακίδες Rx, Tx)

void ekteleseEntolesBT() {
  if (BTserial.available()) {
    const signed char slider_code = BTserial.read();
    delay(1); // Για να προλάβει να σταλθεί στη σειριακή ο δεύτερος αριθμός!
    const signed char slider_value = BTserial.read();
    // Serial.print((String)"\nSlider code: " + slider_code);
    // Serial.println((String)", slider_value: " + slider_value); 
      
    if (slider_code == 1 ) {    // Τιμόνι
        
      if (slider_value < -30)
        stripse(pin_ariste, 2*abs(slider_value));
      else if (slider_value > 30)
        stripse(pin_deksia, 2*abs(slider_value));
      else
        isioseRodes();
    }
    
    else {  // slider_code == 2  // Ταχύτητα
    
      if (slider_value < -30)
        gazose(pin_piso, 2*abs(slider_value));
      else if (slider_value > 30)
        gazose(pin_empros, 2*abs(slider_value));
      else
        tsoulise();
    }
    
  }
}
