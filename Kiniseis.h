// Συνδέσεις οδηγού σε ψηφιακές ακίδες Arduino PWM.

// κινητήρας τιμονιού
const byte pin_ariste = 5;
const byte pin_deksia = 3;
// κινητήρες τροχών
const byte pin_piso = 10;
const byte pin_empros = 9;

void setupMoves() {
  pinMode(pin_ariste, OUTPUT);
  pinMode(pin_deksia, OUTPUT);
  pinMode(pin_piso, OUTPUT);
  pinMode(pin_empros, OUTPUT);
}
void isioseRodes() {
  // Serial.println("isioseRodes");
  digitalWrite(pin_ariste, LOW);
  digitalWrite(pin_deksia, LOW);
}

void stripseAristera() {
  // Serial.println("stripseAristera");
  digitalWrite(pin_ariste, HIGH);
  digitalWrite(pin_deksia, LOW);
}

void stripseDeksia() {
  // Serial.println("stripseDeksia");
  digitalWrite(pin_ariste, LOW);
  digitalWrite(pin_deksia, HIGH);
}

void stripse(const byte kateuthinsi, const int gonia) {
  // Serial.println((String)"gonia " + gonia);
  analogWrite(kateuthinsi, gonia);
}

// ========================================================

void gazose(const byte kateuthinsi, const int gkazia) {
  // Serial.println((String)"gkazia " + gkazia);
  analogWrite(kateuthinsi, gkazia);
}

void tsoulise() {
  // Coast mode for fast current decay to high impedance, low-power sleep mode
  // Serial.println("tsoulise");
  digitalWrite(pin_empros, LOW);
  digitalWrite(pin_piso, LOW);
}

void frenare() {  // Brake mode for low-side slow decay
  // Serial.println("frenare");
  digitalWrite(pin_empros, HIGH);
  digitalWrite(pin_piso, HIGH);
}

const byte kato_PWM = 30;
const byte pano_PWM = 255;
const byte vima_PWM = 10;
const unsigned long anamoni = 100;   // σε χιλιοστά του δευτερόλεπτου (ms)

void epitaxune(const byte kateuthinsi) {
  // Serial.println((String)"epitaxynsi "+ (kateuthinsi==pin_piso? "piso": "empros"));
  for (int i = kato_PWM; i <= pano_PWM; i += vima_PWM) {
    analogWrite(kateuthinsi, i);
    // Serial.print((String)" " + i);
    delay(anamoni);
  }
}

void epivradune(const byte kateuthinsi) {
  // Serial.println((String)"epivradune "+ (kateuthinsi==pin_piso? "piso": "empros"));
  for (int i = pano_PWM; i >= 0; i -= vima_PWM) {
    analogWrite(kateuthinsi, i);
    // Serial.print((String)" " + i);
    delay(anamoni);
  }
}
