void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(36,OUTPUT);
  pinMode(38,OUTPUT);
  pinMode(40,OUTPUT);
}

void loop() {
   digitalWrite(36,HIGH);   // turn the LED off by making the voltage LOW
   digitalWrite(38,HIGH);
   digitalWrite(40,HIGH);
   for (int i=1;i<=11;i++){    // Preamble Gen.
    digitalWrite(36,LOW);// turn the LED off by making the voltage LOW
    digitalWrite(38,LOW);
    digitalWrite(40,LOW);
    delayMicroseconds(245);  // wait for a second
    digitalWrite(36, HIGH);     // turn the LED on (HIGH is the voltage level)
    digitalWrite(38,HIGH);
    digitalWrite(40,HIGH);
    delayMicroseconds(245);                     // wait for a second
   }
  digitalWrite(36, LOW);  // 0 Header for stop charging
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   // 0 LSB
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);
  delayMicroseconds(490);
  digitalWrite(36, LOW);   // 1
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  delayMicroseconds(245);
  digitalWrite(36, HIGH);   
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);
  delayMicroseconds(245);
  digitalWrite(36, LOW);   // 0
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   // 0 2
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);  
  delayMicroseconds(490);
  digitalWrite(36,LOW);   //0
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  delayMicroseconds(490);
  digitalWrite(36,HIGH);   //0
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);
  delayMicroseconds(490);
  digitalWrite(36, LOW);   //0
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   // 0 0
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);
  delayMicroseconds(490);  
  digitalWrite(36, LOW);   //0 parity
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   //1 stop
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);
  delayMicroseconds(245);
  digitalWrite(36, LOW);    
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  delayMicroseconds(245); 

   
  digitalWrite(36, HIGH);   // 0 Data 
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);
  delayMicroseconds(490);
  digitalWrite(36, LOW);   // 0
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   // 0
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);
  delayMicroseconds(490);
  digitalWrite(36, LOW);   //1
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  delayMicroseconds(245);
  digitalWrite(36, HIGH);   
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);
  delayMicroseconds(245);
  digitalWrite(36, LOW);   //0 4
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   // 0
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);
  delayMicroseconds(490);
  digitalWrite(36, LOW);   //0
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   //0
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);
  delayMicroseconds(490);
  digitalWrite(36, LOW);   //0 0
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   // 0 parity 
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);
  delayMicroseconds(490);  
  digitalWrite(36, LOW);   //1 stop
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  delayMicroseconds(245);
  digitalWrite(36, HIGH);   
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);
  delayMicroseconds(245);

  
  digitalWrite(36, LOW);   // 0 Checksum
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   // 0
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);
  delayMicroseconds(490);
  digitalWrite(36, LOW);   // 0
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   //1
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);
  delayMicroseconds(245);
  digitalWrite(36, LOW);  
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  delayMicroseconds(245);
  digitalWrite(36, HIGH);   // 1
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);
  delayMicroseconds(245);
  digitalWrite(36, LOW);  
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  delayMicroseconds(245);
  digitalWrite(36, HIGH);  //0  
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);
  delayMicroseconds(490);
  digitalWrite(36, LOW);   //0
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   // 0
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);
  delayMicroseconds(490);  
  digitalWrite(36, LOW);   //0
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  delayMicroseconds(490);
  digitalWrite(36, HIGH);   //0
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);  
  delayMicroseconds(490);
  digitalWrite(36, LOW);  //1
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  delayMicroseconds(245);
  digitalWrite(36, HIGH);   
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);
  delayMicroseconds(245);
  digitalWrite(36, LOW); //1
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);  
  delayMicroseconds(245);
  digitalWrite(36, HIGH);   
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);
  delayMicroseconds(245);
  //delayMicroseconds(1000);
}
