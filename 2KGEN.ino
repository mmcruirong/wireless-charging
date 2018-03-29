void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(36,OUTPUT);
}

void loop() {
   digitalWrite(36,HIGH);// turn the LED off by making the voltage LOW
   for (int i=1;i<=11;i++){    // Preamble Gen.
    digitalWrite(36,LOW);// turn the LED off by making the voltage LOW
    delayMicroseconds(245);  // wait for a second
    digitalWrite(36, HIGH);   // turn the LED on (HIGH is the voltage level)
    delayMicroseconds(245);                     // wait for a second
   }
  digitalWrite(36, LOW);   // 0 Header for stop charging
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   // 0
  delayMicroseconds(490);
  digitalWrite(36, LOW);   // 0
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   //0
  delayMicroseconds(490);
  digitalWrite(36, LOW);   // 0
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   // 0
  delayMicroseconds(490);
  digitalWrite(36, LOW);   //0
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   //1
  delayMicroseconds(245);
  digitalWrite(36, LOW);   //1
  delayMicroseconds(245);
  digitalWrite(36, HIGH);   // 0
  delayMicroseconds(490);  
  digitalWrite(36, LOW);   //0
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   //1
  delayMicroseconds(245);
  digitalWrite(36, LOW);   //1
  delayMicroseconds(245);  
  digitalWrite(36, HIGH);   // 0 Data 
  delayMicroseconds(490);
  digitalWrite(36, LOW);   // 0
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   // 0
  delayMicroseconds(490);
  digitalWrite(36, LOW);   //0
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   // 0
  delayMicroseconds(490);
  digitalWrite(36, LOW);   //0
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   // 1
  delayMicroseconds(245);
  digitalWrite(36, LOW);   //1
  delayMicroseconds(245);
  digitalWrite(36, HIGH);   //1
  delayMicroseconds(245);
  digitalWrite(36, LOW);   //1
  delayMicroseconds(245);
  digitalWrite(36, HIGH);   // 0
  delayMicroseconds(490);  
  digitalWrite(36, LOW);   //1
  delayMicroseconds(245);
  digitalWrite(36, HIGH);   //1
  delayMicroseconds(245);
  digitalWrite(36, LOW);   //1
  delayMicroseconds(245);
  digitalWrite(36, HIGH);   //1
  delayMicroseconds(245);
  digitalWrite(36, LOW);   // 0 Checksum
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   // 0
  delayMicroseconds(490);
  digitalWrite(36, LOW);   // 0
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   //0
  delayMicroseconds(490);
  digitalWrite(36, LOW);   // 0
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   // 0
  delayMicroseconds(490);
  digitalWrite(36, LOW);   //1
  delayMicroseconds(245);
  digitalWrite(36, HIGH);   //1
  delayMicroseconds(245);
  digitalWrite(36, LOW);   //0
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   // 0
  delayMicroseconds(490);  
  digitalWrite(36, LOW);   //1
  delayMicroseconds(245);
  digitalWrite(36, HIGH);   //1
  delayMicroseconds(245);
  digitalWrite(36, LOW);   //1
  delayMicroseconds(245);
  digitalWrite(36, HIGH);   //1
  delayMicroseconds(245);
  digitalWrite(36, LOW);   //1
  //delayMicroseconds(1000);
}
