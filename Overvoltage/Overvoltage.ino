void setup() {
  // overvotlage,0x0204
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(36,OUTPUT);
}

void loop() {
   digitalWrite(36,HIGH);// Preamble Gen
   for (int i=1;i<=11;i++){    
    digitalWrite(36,LOW);// turn the LED off by making the voltage LOW
    delayMicroseconds(245);  // wait for a second
    digitalWrite(36, HIGH);   // turn the LED on (HIGH is the voltage level)
    delayMicroseconds(245);                     // wait for a second
   }
  digitalWrite(36, LOW);   // 0 Header for stop charging 0X02 00000001001
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
  //OverVoltage 0x04 00000010001 
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
  digitalWrite(36, HIGH);   //0
  delayMicroseconds(490);
  digitalWrite(36, LOW);   // 0
  delayMicroseconds(490);  
  digitalWrite(36, HIGH);   //0
  delayMicroseconds(490);
  digitalWrite(36, LOW);   //1
  delayMicroseconds(245);
  digitalWrite(36, HIGH);   //1
  delayMicroseconds(245);
  //Checksum 00000011001
  digitalWrite(36, LOW);   // 0 
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
  digitalWrite(36, LOW);   //1
  delayMicroseconds(245);
  digitalWrite(36, HIGH);   // 1
  delayMicroseconds(245);  
  digitalWrite(36, LOW);   //0
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   //0
  delayMicroseconds(490);
  digitalWrite(36, LOW);   //1
  delayMicroseconds(245);
  digitalWrite(36, HIGH);   //1
  //delayMicroseconds(1000);
}
