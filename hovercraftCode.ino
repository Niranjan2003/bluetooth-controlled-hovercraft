// Arduino COM port stopped showing up so we couldn't conduct further testing of the code
#include <SoftwareSerial.h>
#include <Servo.h>

 // define the pins for the DC motor, H-bridge, and servo
const int motorAPin1 = 2; // IN1
const int motorAPin2 = 3; // IN2


// const int motorAEnablePin = 6;
// const int motorBPin1 = 7;
// const int motorBPin2 = 8;
// const int motorBEnablePin = 9;
// const int directionPin = 10; // pin to control the H-bridge direction
const int servoPin = 4;

// prevents servo from turning too far
int servoRange = 0;

// create a new software serial port for the HC-05
SoftwareSerial BTSerial(2, 3);

// create a servo object for the servo motor
Servo servoMotor;



void setup() {
  // set the pins as output
  pinMode(motorAPin1, OUTPUT); 
  pinMode(motorAPin2, OUTPUT);

  digitalWrite(motorAPin1, LOW); 
  digitalWrite(motorAPin2, LOW);
  
//  pinMode(motorAEnablePin, OUTPUT);
//  pinMode(motorBPin1, OUTPUT);
//  pinMode(motorBPin2, OUTPUT);
//  pinMode(motorBEnablePin, OUTPUT);
//  pinMode(directionPin, OUTPUT);
  pinMode(servoPin, OUTPUT);

  // initialize the servo motor
  servoMotor.attach(servoPin);

  // set up the Bluetooth serial communication
 /*  BTSerial.begin(9600); */
  /* BTSerial.begin(38400); */
  Serial.begin(38400);
  /* Serial.begin(9600); */
}

/* void loop() {
  // read the Bluetooth data
  if (BTSerial.available()) {
    char c = BTSerial.read();
    // if the data is 'A', move the DC motor forward
    if (c == 'A') {
      digitalWrite(motorAPin1, HIGH);
      digitalWrite(motorAPin2, LOW);
      analogWrite(motorAEnablePin, 255);
      
    }

    // if the data is 'B', move the DC motor backward
    else if (c == 'B') {
      digitalWrite(motorAPin1, LOW);
      digitalWrite(motorAPin2, HIGH);
      analogWrite(motorAEnablePin, 255);
      Serial.println("tests");
    }
    // if the data is 'C', stop the DC motor
    else if (c == 'C') {
      digitalWrite(motorAPin1, LOW);
      digitalWrite(motorAPin2, LOW);
      analogWrite(motorAEnablePin, 0);
    }
    // if the data is 'D', change the direction of the H-bridge
    else if (c == 'D') {
      digitalWrite(directionPin, !digitalRead(directionPin));
    }
    // if the data is 'E', move the servo to the left (90 degrees)
    else if (c == 'E') {
      servoMotor.write(90);
    }
    // if the data is 'F', move the servo to the right (180 degrees)
    else if (c == 'F') {
      servoMotor.write(180);
    }
    // if the data is 'G', move the servo to the middle (0 degrees)
    else if (c == 'G') {
      servoMotor.write(0);
    }
  }
}  */

void loop()
{
  if(Serial.available() > 0) 
  {
    char c = Serial.read();   // a 'int' or 'byte' or 'char'

    if( c == 'F') {
      // Forward
      Serial.println("Forward");
      Serial.println("");
    
    } else if (c == 'B') {
      // Backward
      Serial.println("Backward");
      Serial.println("");

    } else if (c == 'L') {
      // Left
      Serial.println("Left");
      Serial.println("");
      servoMotor.write(45);

    } else if (c == 'R') {
      // Right
      Serial.println("Right");
      Serial.println("");
      servoMotor.write(-45);

    } else if(c == 'S') {
      // Stop
      Serial.println("STOP");
      Serial.println("");

    } else if(c == 'G') {
      // Forward left
      Serial.println("Forward left");
      Serial.println("");

    } else if(c == 'I') {
      // Forward right
      Serial.println("Forward right");
      Serial.println("");

    } else if(c == 'H') {
      // Back left
      Serial.println("Back left");
      Serial.println("");

    } else if(c == 'J') {
      // Back right
      Serial.println("Back right");
      Serial.println("");
    } 
  }
}
 
