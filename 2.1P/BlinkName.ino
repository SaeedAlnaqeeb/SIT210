int led1 = D7; 
int button1 = D2;

void setup() {

  pinMode(led1, OUTPUT);
  pinMode(button1, INPUT_PULLUP);

}

void loop() {
    
    int state = digitalRead(button1);
    
    if (state == LOW){
        blinkMyName();
    }
    else {
        digitalWrite(led1, LOW);
    }
}

void longBlink(int led) {
    
    digitalWrite(led, HIGH);
    delay(300);
    digitalWrite(led, LOW);
    delay(100);
    
}

void shortBlink(int led) {
    
    digitalWrite(led, HIGH);
    delay(50);
    digitalWrite(led, LOW);
    delay(100);
    
}

void blinkMyName(){
    
    // Blinking my name ( Saeed ) in Morse Code:
    // Letter S 
    shortBlink(led1);
    shortBlink(led1);
    shortBlink(led1);
    delay(750);
    
    // Letter A      
    shortBlink(led1);
    longBlink(led1);
    delay(750);
    
    // Letter E      
    shortBlink(led1);
    delay(750);
    
    // Letter E
    shortBlink(led1);
    delay(750);
    
    // Letter D      
    longBlink(led1);
    shortBlink(led1);
    shortBlink(led1);
          
    delay(1200);
}