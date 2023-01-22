// Modified from Sweep
// by BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.
//Modified by carjo3000

#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int pos = 0;    // variable to store the servo position 

int m = 60000;  //convert ms to minutes
int s = 1000;  //convert ms to seconds

//Switch is turned on as soon as the system is plugged in
//Set time intervals to turn light switch OFF and ON
//Here each interval waits a few seconds between switching on and off 
int time_1 = 5*s; //OFF  
int time_2 = 10*s; //ON 
int time_3 = 15*s; //OFF
int time_4 = 20*s; //ON


void setup() 
{ 
  myservo.attach(9);  // attaches the servo to pin 9 of arduino
} 
 
 
void loop() 
{ 
////TURN ON LIGHT///////////////////////////////////////////////////////////////////////////////////
  for(pos = 60; pos < 100; pos += 1)  // goes from 60 degrees to 100 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  }
  for(pos = 100; pos>=60; pos-=1)     // goes from 100 degrees to 60 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
//////WAIT....../////////////////////////////////////////////////////////////////////////////////////
  delay(time_1);             
////TURN OFF LIGHT///////////////////////////////////////////////////////////////////////////////////  
  for(pos = 60; pos>=20; pos-=1)     // goes from 60 degrees to 20 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  }
  { 
  for(pos = 20; pos < 60; pos += 1)  // goes from 20 degrees to 60 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  }
//////WAIT....../////////////////////////////////////////////////////////////////////////////////////  
  delay(time_2);                
////TURN ON LIGHT///////////////////////////////////////////////////////////////////////////////////
  for(pos = 60; pos < 100; pos += 1)  // goes from 60 degrees to 100 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  }
  for(pos = 100; pos>=60; pos-=1)     // goes from 100 degrees to 60 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
//////WAIT....../////////////////////////////////////////////////////////////////////////////////////
  delay(time_3);                
////TURN OFF LIGHT///////////////////////////////////////////////////////////////////////////////////  
  for(pos = 60; pos>=20; pos-=1)     // goes from 60 degrees to 20 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  }
  { 
  for(pos = 20; pos < 60; pos += 1)  // goes from 20 degrees to 60 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  }
//////WAIT....../////////////////////////////////////////////////////////////////////////////////////  
  delay(time_4);   
/////Start again from top///////////////////////////////////////////////////////////////////////////  
}
  } }

