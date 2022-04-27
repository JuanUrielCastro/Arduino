  /*
  ESP32 PCA9685 Servo Control
  esp32-pca9685.ino
  Driving multiple servo motors with ESP32 and PCA9685 PWM module
  Use I2C Bus
 
  DroneBot Workshop 2020
  https://dronebotworkshop.com
*/
 
// Include Wire Library for I2C
#include <Wire.h>
 
// Include Adafruit PCA9685 Servo Library
#include <Adafruit_PWMServoDriver.h>
 
// Creat object to represent PCA9685 at default I2C address
Adafruit_PWMServoDriver pca9685 = Adafruit_PWMServoDriver(0x40);
 //https://dl.espressif.com/dl/package_esp32_index.json
// Define maximum and minimum number of "ticks" for the servo motors
// Range from 0 to 4095
// This determines the pulse width
 
//#define SERVO1MIN  127  // Minimum value
//#define SERVO1MAX  632  // Maximum value

//#define SERVO2MIN  120  
//#define SERVO2MAX  632 

//#define SERVO3MIN  127  
//#define SERVO3MAX  630 

//#define SERVOMIN  125  //4
//#define SERVOMAX  632 //4
#define SERVOMIN  100  //4
#define SERVOMAX  400 //4

//#define SERVO5MIN  125  
//#define SERVO5MAX  632 

//#define SERVO6MIN  125  
//#define SERVO6MAX  632
 
//#define SERVO7MIN  125  
//#define SERVO7MAX  632 

//#define SERVO8MIN  125  
//#define SERVO8MAX  628 

//#define SERVOMIN  125  
//#define SERVOMAX  628 
 
// Define servo motor connections (expand as required)
#define SER0  0   //Servo Motor 0 on connector 0
#define SER1  1  //Servo Motor 1 on connector 12
#define SER2  2
#define SER3  3

#define SER4  4
#define SER5  5
#define SER6  6
#define SER7  7
#define SER8  8
 
// Variables for Servo Motor positions (expand as required)
int pwm0;
int pwm1;
int pwm2;
int pwm3;
int pwm4;
int pwm5;
int pwm6;
int pwm7;
int pwm8;
 
void setup() {
 
  // Serial monitor setup
  Serial.begin(115200);
 
  // Print to monitor
  Serial.println("PCA9685 Servo Test");
 
  // Initialize PCA9685
  pca9685.begin();
 
  // Set PWM Frequency to 50Hz
  pca9685.setPWMFreq(40);
 
}
 
void loop() {
    pwm0 = map(80, 0, 180, SERVOMIN, SERVOMAX);
    delay(10);
    pca9685.setPWM(SER0, 0, pwm0);
    
    pwm2 = map(100, 0, 180, SERVOMIN, SERVOMAX);
    pca9685.setPWM(SER2, 0, pwm2);


    
    pwm1 = map(100, 0, 180, SERVOMIN, SERVOMAX);
    pca9685.setPWM(SER1, 0, pwm1);

    pwm3 = map(80, 0, 180, SERVOMIN, SERVOMAX);
    pca9685.setPWM(SER3, 0, pwm3);


/////////////////////////////////////////////////////////
    pwm4 = map(90, 0, 180, SERVOMIN, SERVOMAX);
    pca9685.setPWM(SER4, 0, pwm4);
    pwm6 = map(90, 0, 180, SERVOMIN, SERVOMAX);
    pca9685.setPWM(SER6, 0, pwm6);


    pwm5 = map(90, 0, 180, SERVOMIN, SERVOMAX);
    pca9685.setPWM(SER5, 0, pwm5);

    pwm7 = map(90, 0, 180, SERVOMIN, SERVOMAX);
    pca9685.setPWM(SER7, 0, pwm7);



    pwm8 = map(90, 0, 180, SERVOMIN, SERVOMAX);
    pca9685.setPWM(SER8, 0, pwm8);

 
//  // Move Motor 0 from 0 to 180 degrees
//  for (int posDegrees = 0; posDegrees <= 180; posDegrees++) {
// 
//    // Determine PWM pulse width
//    pwm0 = map(posDegrees, 0, 180, SERVOMIN, SERVOMAX);
//    // Write to PCA9685
//    pca9685.setPWM(SER0, 0, pwm0);
//    // Print to serial monitor
//    Serial.print("Motor 0 = ");
//    Serial.println(posDegrees);
//    delay(5);
//  }
// 
//  // Move Motor 1 from 180 to 0 degrees
//  for (int posDegrees = 180; posDegrees >= 0; posDegrees--) {
// 
//    // Determine PWM pulse width
//    pwm1 = map(posDegrees, 0, 180, SERVOMIN, SERVOMAX);
//    // Write to PCA9685
//    pca9685.setPWM(SER1, 0, pwm1);
//    // Print to serial monitor
//    Serial.print("Motor 1 = ");
//    Serial.println(posDegrees);
//    delay(5);
//  }
// 
//  // Move Motor 0 from 180 to 0 degrees
//  for (int posDegrees = 180; posDegrees >= 0; posDegrees--) {
// 
//    // Determine PWM pulse width
//    pwm0 = map(posDegrees, 0, 180, SERVOMIN, SERVOMAX);
//    // Write to PCA9685
//    pca9685.setPWM(SER0, 0, pwm0);
//    // Print to serial monitor
//    Serial.print("Motor 0 = ");
//    Serial.println(posDegrees);
//    delay(10);
//  }
// 
// 
//  // Move Motor 1 from 0 to 180 degrees
//  for (int posDegrees = 0; posDegrees <= 180; posDegrees++) {
// 
//    // Determine PWM pulse width
//    pwm1 = map(posDegrees, 0, 180, SERVOMIN, SERVOMAX);
//    // Write to PCA9685
//    pca9685.setPWM(SER1, 0, pwm1);
//    // Print to serial monitor
//    Serial.print("Motor 1 = ");
//    Serial.println(posDegrees);
//    delay(10);
//  }

 
}
