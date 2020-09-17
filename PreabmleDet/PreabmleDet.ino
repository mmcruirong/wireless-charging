/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(36,OUTPUT);
  Serial.begin(9600);
  Serial.println("System Ready");
  Serial.println("Taking Preamble ");
  delay(5000);
}

// the loop function runs over and over again forever
void loop() {
  float high;
  float sumv=0;
  float vol;
  int cycle=0;
  for (int i=0;i<1000;i++){    
    if (i==0){      
      float voltage[1000];
      for (int j=1;j<=100;j++){
        voltage[0]=0;
        analogReadResolution(12);  
        int sensorValue = analogRead(A0);
        // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
        voltage[j] = sensorValue * (3.3 / 1023.0);
        sumv+=voltage[j];
        //Serial.println("Sum");
       // Serial.println(sumv);        
      }
    high=sumv/5;
    //Serial.println("High");
    //Serial.println(high);   
    }    
    analogReadResolution(12); 
    int sensorValue = analogRead(A0);
    // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
    vol = sensorValue * (3.3 / 1023.0);
    //Serial.println("RealVotage");
    //Serial.println(vol);
    if(vol<high-0.15){
      float vol1;
      //Serial.println("low");     
      //delayMicroseconds(250);
      sensorValue = analogRead(A0);
      vol1 = sensorValue * (3.3 / 1023.0);
     // Serial.println("Next");
     // Serial.println(vol1);  
      if(vol1>high-0.15){
       // Serial.println("high");
        cycle+=1;
       // Serial.println("cycle"); 
       // Serial.println(cycle); 
        }
      }   
     
    if(cycle==8)
      //Serial.print("Preamble Detected");  
      digitalWrite(LED_BUILTIN,HIGH);
      delay(1000);
      digitalWrite(LED_BUILTIN,LOW);
      delay(1000);
  }
  
}
