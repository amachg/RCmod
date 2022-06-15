/*
  Ανακατασκευή τηλεκατευθυνόμενου Rock Crawler jr της Maisto.
  
  1. Αντικατάσταση της χαλασμένης πλακέτας με ελεγκτή Arduino Uno και δύο οδηγούς 
  κινητήρων DRV887. Ο ένας οδηγεί το τιμόνι και ο άλλος τους 4 κινητήρες των τροχών 
  με σήμα PWM. Όλοι οι κινητήρες είναι brushed-DC με τροφοδοσία στα 9v.
  
  2. Αντικατάσταση των 4 αλκαλικών μπαταριών (4x1,5v = 6v), από 3 επαναφορτιζόμενες
  λιθίου 18650 (στα 2400 mAh), σε μπαταριοθήκη (3x4,2v = 12,6v max).
  Η τροφοδότηση του ελεγκτή γίνεται στην είσοδο "βαρελάκι" και των οδηγών κινητήρων 
  από την έξοδο Vin του ελεγκτή (με πτώση της τάσης κατά 1v).
  Το BlueTooth module τροφοροτείται από την έξοδο 5v του ελεγκτή.
*/

#include "Kiniseis.h"
#include "Asyrmato.h"  // Τηλεχειρισμός με BlueΤooth
#include "Bataria.h"
#include "Aisthitiras_apostasis.h"

void setup() {
  // Στήσε σειριακές θύρες ελεγκτή.
  Serial.begin(9600);     // Είτε για εμφάνιση στο monitor, ή για σύνδεση με το module.
  // Serial.println("\nSerial OK");
  
  BTserial.begin(9600);   // σύνδεση ελεγκτή με το Bluetooth module
  BTserial.setTimeout(10);
  // Serial.println("Seiriaki me Bluetooth OK");
  
  setupMoves();
  // Serial.println("setupMoves OK");
}

void loop() {
  ekteleseEntolesBT();
  
  metra_bataria(5000);        // περίοδος ελέγχου σε ms
  
  // if(sygkrouomai(200, 30))    // περίοδος ελέγχου σε ms, και απόσταση σε cm
  //   frenare();
}
