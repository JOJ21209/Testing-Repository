/*
 * IRremote: IRrecvDemo - demonstrates receiving IR codes with IRrecv
 * An IR detector/demodulator must be connected to the input RECV_PIN.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */

#include <IRremote.h>
#include <Servo.h>

int RECV_PIN = 10;

IRrecv irrecv(RECV_PIN);
Servo motor;
decode_results results;

void setup()
{
  Serial.begin(9600);
  // In case the interrupt driver crashes on setup, give a clue
  // to the user what's going on.
  Serial.println("Enabling IRin");
  irrecv.enableIRIn(); // Start the receiver
  Serial.println("Enabled IRin");
  pinMode(13,OUTPUT);
  motor.attach(6);
}


void loop() {
  while(true){
  	if (irrecv.decode(&results)) {
    	Serial.println(results.value, DEC);
    	if (results.value == 16580863){
    		digitalWrite(13,HIGH); 
      		delay(100);
      		motor.write(0);
          	break;
    	}
    	if (results.value == 16613503){
     		digitalWrite(13,LOW); 
      		delay(100);
      		motor.write(270);
          	break;
    	}
    	if (results.value == 16597183){
     		digitalWrite(13,LOW); 
      		delay(100);
      		motor.write(0);
          	break;
    	}
    	
  	}
  }
  irrecv.resume(); // Receive thxt value
  delay(100);
}