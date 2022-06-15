/*
  Αισθητήρας απόστασης μεσω υπερήχων, HC-SR04,χρησιμοποιώντας την βιβλιοθήκη NewPing.
*/

#include <NewPing.h>

#define TRIGGER_PIN  A0  // ψηφιακή ακίδα εντολής προς τον ασθητήρα ή αντίστοιχη αναλογική
#define ECHO_PIN     A1  // ακίδα αντανακλώμενης ηχούς
#define MAX_DISTANCE 100 // μέγιστη απόσταση σε εκατοστά. Μπορεί να φτάνει και τα 5 μέτρα.

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

bool sygkrouomai(const unsigned periodos, const unsigned apostasi) {
  // Περίοδος μεταξύ ελέγχων, σε millisecond. Τουλάχιστον 29ms.
  if ( millis()-teleytaia_stigmi >= periodos ) {
    // Διάμεσος πέντε απανωτών μετρήσεων
    // Do multiple pings (default=5), discard out of range pings
    // and return median echoTime in microseconds.
    const unsigned ms = sonar.ping_median();
    const unsigned cm = sonar.convert_cm(ms);
    teleytaia_stigmi = millis(); 
    if (cm < apostasi) {
      Serial.println ((String)"Empodio se apostasi " + cm + " ekatosta");
      return true;
    }
  }
  return false;
}
