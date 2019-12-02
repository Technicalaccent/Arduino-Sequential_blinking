
/* A simple program to sequentially turn on and turn off 3 LEDs */ 

int LED1 = 13;
int LED2 = 12;
int LED3 = 11;

void setup() {
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
}


void loop() {
  digitalWrite(LED1, HIGH);    // turn on LED1 
  delay(10);                  // wait for 500ms
  digitalWrite(LED2, HIGH);    // turn on LED2
  delay(10);                  // wait for 900ms       
  digitalWrite(LED3, HIGH);    // turn on LED3 
  delay(500);                  // wait for 200ms
  digitalWrite(LED1, LOW);     // turn off LED1
  delay(50);                  // wait for 300ms
  digitalWrite(LED2, LOW);     // turn off LED2
  delay(10);                  // wait for 400ms
  digitalWrite(LED3, LOW);     // turn off LED3
  delay(40);                  // wait for 50ms before running program all over again

 
}
