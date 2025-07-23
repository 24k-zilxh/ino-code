void setup() {
    Serial.begin(9600);
    pinMode(10, INPUT_PULLUP);
    pinMode(11, INPUT_PULLUP);
    pinMode(12, OUTPUT);
}

void loop() {
    bool b10 = (digitalRead(10) == LOW);
    bool b11 = (digitalRead(11) == LOW);
    
    if ((b10 ^ b11)) {
        digitalWrite(12,HIGH);
        Serial.print("XOR has been triggered");
    }
    else {   
        digitalWrite(12,LOW);
    }

}