//L293D
//Motor A
const int motorPin1  = 3;  // Pin 14 of L293
const int motorPin2  = 4;  // Pin 10 of L293

//Motor B
const int motorPin3  = 5; // Pin  7 of L293
const int motorPin4  = 6;  // Pin  2 of L293

//Motor C
const int motorPin5  = 9; // Pin  7 of L293
const int motorPin6  = 10;  // Pin  2 of L293

//Motor D
const int motorPin7  = 11; // Pin  7 of L293
const int motorPin8  = 12;  // Pin  2 of L293

char data;

//This will run only one time.
void setup(){
 
    //Set pins as outputs
    pinMode(motorPin1, OUTPUT);
    pinMode(motorPin2, OUTPUT);
    pinMode(motorPin3, OUTPUT);
    pinMode(motorPin4, OUTPUT);
    pinMode(motorPin5, OUTPUT);
    pinMode(motorPin6, OUTPUT);
    pinMode(motorPin7, OUTPUT);
    pinMode(motorPin8, OUTPUT);
    Serial.begin(9600);   
    
  
}


void loop(){
  data = Serial.read(); 
  if(data=='F')
  {
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, LOW);
    digitalWrite(motorPin5, LOW);
    digitalWrite(motorPin6, HIGH);
    digitalWrite(motorPin7, LOW);
    digitalWrite(motorPin8, HIGH);
    delay(750);
  } 
 
  else if(data=='B')
  {
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, HIGH);
    digitalWrite(motorPin5, HIGH);
    digitalWrite(motorPin6, LOW);
    digitalWrite(motorPin7, HIGH);
    digitalWrite(motorPin8, LOW);
    delay(750);
  } 
    
    //This code will turn RIGHT for 1 sec.
   else if(data=='R')
  {
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, LOW);
    digitalWrite(motorPin5, LOW);
    digitalWrite(motorPin6, LOW);
    digitalWrite(motorPin7, LOW);
    digitalWrite(motorPin8, LOW);
    delay(750);
  } 
    //This code will turn LEFT  for 1 sec.
  else if(data=='L')
  {
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
    digitalWrite(motorPin5, LOW);
    digitalWrite(motorPin6, HIGH);
    digitalWrite(motorPin7, LOW);
    digitalWrite(motorPin8, HIGH);
    delay(750);
  }   
    
    //And this code will stop motors
   else
  {
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
    digitalWrite(motorPin5, LOW);
    digitalWrite(motorPin6, LOW);
    digitalWrite(motorPin7, LOW);
    digitalWrite(motorPin8, LOW);
    delay(750);
  } 
    
    
   
}

