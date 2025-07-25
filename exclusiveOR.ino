void setup() { // code that runs ONCE, right after running 
    Serial.begin(9600);
    pinMode(10, INPUT_PULLUP); // PULLUP means that it will switch to LOW if there is current flowing through it
    pinMode(11, INPUT_PULLUP); // PULLUP means that it will switch to LOW if there is current flowing through it
    pinMode(12, OUTPUT);
}

void loop() { // code that keeps running indefinitely after setup
    bool b10 = (digitalRead(10) == LOW); // if this is LOW (current is flowing), then b10 will be true
    bool b11 = (digitalRead(11) == LOW); // if this is LOW (current is flowing), then b10 will be true

    if ((b10 ^ b11)) { // XOR (^), if one is true and the other isn't, it will be TRUE
        digitalWrite(12,HIGH);
        Serial.print("XOR has been triggered");
    }
    else {
        digitalWrite(12, LOW);
    }
    
}
