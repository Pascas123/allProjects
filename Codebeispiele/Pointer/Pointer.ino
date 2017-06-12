int a=5;
int* value=&a; // der Pointer referenziert mit dem *Operator (Referenzierungsoperator den Wert der aud der Adresse von a hinterlegt ist
int c=&a;   // 'c' wird die Adresse von a zugewiesen
int y=*value;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
// Zeigt den Wert von 'a' an
Serial.println(a);
// Zeigt den Wert von 'c' an
Serial.println(c);
Serial.println(*value);
Serial.println(y);
delay(11600);
}
