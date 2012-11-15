#include <Servo.h>

// declare both servos
Servo left;
Servo right;
Servo base;
// setup the array of servo positions
int nextServo = 0;
int servoAngles[] = {0,0};

int pos = 0;
int pos1 = 0;
int angle = 0;

void setup() {
  //attach servos to their pins
 base.attach(11);
  left.attach(9);
  right.attach(10);
  Serial.begin(9600);
}

void loop() {

  if (Serial.available()) {
    int servoAngle = Serial.read();

//    Serial.println(servoAngle);
if (servoAngle > 0 && servoAngle < 21){
  angle = map(servoAngle, 1, 20, 110, 50);
  

}
 base.write(angle);
  delay(1); 
    
   if (servoAngle == 0 ){
 
  for(pos1 = -10; pos1 < 60; pos1 += 1)  // goes from 0 degrees to 180 degrees
  {                                  // in steps of 1 degree
    right.write(pos1);              // tell servo to go to position in variable 'pos'
    delay(6);                       // waits 15ms for the servo to reach the position
  }

  for(pos1 = 60; pos1>=-10; pos1-=1)     // goes from 180 degrees to 0 degrees
  {                                
    right.write(pos1);              // tell servo to go to position in variable 'pos'
    delay(6);                       // waits 15ms for the servo to reach the position
  } 
  
   
   
  }
  
  if (servoAngle == 22){
   for(pos = 0; pos < 90; pos += 1)  // goes from 0 degrees to 180 degrees
  {                                  // in steps of 1 degree
    left.write(pos);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }
  
  for(pos1 = 0; pos1 < 90; pos1 += 1)  // goes from 0 degrees to 180 degrees
  {                                  // in steps of 1 degree
    right.write(pos1);              // tell servo to go to position in variable 'pos'
   delay(5);                       // waits 15ms for the servo to reach the position
  }
  
  for(pos = 90; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees
  {                                
    left.write(pos);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  } 
  
  for(pos1 = 90; pos1>=1; pos1-=1)     // goes from 180 degrees to 0 degrees
  {                                
    right.write(pos1);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }   
      for(pos = 0; pos < 90; pos += 1)  // goes from 0 degrees to 180 degrees
  {                                  // in steps of 1 degree
    left.write(pos);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }
  
  for(pos1 = 0; pos1 < 90; pos1 += 1)  // goes from 0 degrees to 180 degrees
  {                                  // in steps of 1 degree
    right.write(pos1);              // tell servo to go to position in variable 'pos'
   delay(5);                       // waits 15ms for the servo to reach the position
  }
  
  for(pos = 90; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees
  {                                
    left.write(pos);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  } 
  
  for(pos1 = 90; pos1>=1; pos1-=1)     // goes from 180 degrees to 0 degrees
  {                                
    right.write(pos1);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }   
    for(pos = 0; pos < 90; pos += 1)  // goes from 0 degrees to 180 degrees
  {                                  // in steps of 1 degree
    left.write(pos);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }
  
  for(pos1 = 0; pos1 < 90; pos1 += 1)  // goes from 0 degrees to 180 degrees
  {                                  // in steps of 1 degree
    right.write(pos1);              // tell servo to go to position in variable 'pos'
   delay(5);                       // waits 15ms for the servo to reach the position
  }
  
  for(pos = 90; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees
  {                                
    left.write(pos);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  } 
  
  for(pos1 = 90; pos1>=1; pos1-=1)     // goes from 180 degrees to 0 degrees
  {                                
    right.write(pos1);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }   
    for(pos = 0; pos < 90; pos += 1)  // goes from 0 degrees to 180 degrees
  {                                  // in steps of 1 degree
    left.write(pos);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }
  
  for(pos1 = 0; pos1 < 90; pos1 += 1)  // goes from 0 degrees to 180 degrees
  {                                  // in steps of 1 degree
    right.write(pos1);              // tell servo to go to position in variable 'pos'
   delay(5);                       // waits 15ms for the servo to reach the position
  }
  
  for(pos = 90; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees
  {                                
    left.write(pos);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  } 
  
  for(pos1 = 90; pos1>=1; pos1-=1)     // goes from 180 degrees to 0 degrees
  {                                
    right.write(pos1);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }   
   for(pos = 0; pos < 90; pos += 1)  // goes from 0 degrees to 180 degrees
  {                                  // in steps of 1 degree
    left.write(pos);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }
  
  for(pos1 = 0; pos1 < 90; pos1 += 1)  // goes from 0 degrees to 180 degrees
  {                                  // in steps of 1 degree
    right.write(pos1);              // tell servo to go to position in variable 'pos'
   delay(5);                       // waits 15ms for the servo to reach the position
  }
  
  for(pos = 90; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees
  {                                
    left.write(pos);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  } 
  
  for(pos1 = 90; pos1>=1; pos1-=1)     // goes from 180 degrees to 0 degrees
  {                                
    right.write(pos1);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }   
  
  
  
  /*
     for(pos1 = 140; pos1>=70; pos1-=1)     // goes from 180 degrees to 0 degrees
  {                                
    base.write(pos1);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }  
    for(pos1 = 140; pos1>=70; pos1-=1)     // goes from 180 degrees to 0 degrees
  {                                
    base.write(pos1);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }   
    for(pos1 = 140; pos1>=70; pos1-=1)     // goes from 180 degrees to 0 degrees
  {                                
    base.write(pos1);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }   
    for(pos1 = 140; pos1>=70; pos1-=1)     // goes from 180 degrees to 0 degrees
  {                                
    base.write(pos1);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }   
    for(pos1 = 140; pos1>=70; pos1-=1)     // goes from 180 degrees to 0 degrees
  {                                
    base.write(pos1);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }   
    for(pos1 = 140; pos1>=70; pos1-=1)     // goes from 180 degrees to 0 degrees
  {                                
    base.write(pos1);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }   
    for(pos1 = 140; pos1>=70; pos1-=1)     // goes from 180 degrees to 0 degrees
  {                                
    base.write(pos1);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }    
    */
  }
  
  }
  
}
