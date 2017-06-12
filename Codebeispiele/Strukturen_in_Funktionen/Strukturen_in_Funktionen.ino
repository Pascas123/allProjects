struct nummerEins{
  int a;
};
struct nummerEins erster={1};

struct nummerZwei{
  int b;
};
struct nummerZwei zweiter={2};
/*Anmerkung
 *  der * Operator ist der Referenzierungsoperator, mit ihm kann einer Variable der Wert des mit[*] referenzierten Elements
 *  zugewiesen werden.
 *  Bsp:
 *  int y=0;
 *  int* value=3;
 *  
 */
void tauschen(struct nummerEins *dieErste, struct nummerZwei *dieZweite){
  dieErste->a=dieZweite->b;
}


void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("Erste Struktur");
Serial.println(erster.a);
Serial.println("Zweite Struktur");
Serial.println(zweiter.b);
tauschen(&erster, &zweiter); // Nachdem die Funktion aufgerufen wurde, 
delay(1000);

}
