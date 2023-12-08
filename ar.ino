#include <Servo.h>

// Motor control pins for L298N
int motor1IN1 = 9;   // Connect to IN1 of L298N for Motor 1
int motor1IN2 = 10;  // Connect to IN2 of L298N for Motor 1
int motor1ENA = 5;   // Connect to ENA of L298N for Motor 1 (PWM)

int motor2IN3 = 6;   // Connect to IN3 of L298N for Motor 2
int motor2IN4 = 7;   // Connect to IN4 of L298N for Motor 2
int motor2ENB = 11;  // Connect to ENB of L298N for Motor 2 (PWM)

// Servo control pin
int servoPin = 3;

// Ultrasonic sensor pins
int trigPin = 12;
int echoPin = 13;

// Lights
int greenLightPin = 2;
int redLightPin = 4;

Servo sensorServo;

void setup() {
  pinMode(motor1IN1, OUTPUT);
  pinMode(motor1IN2, OUTPUT);
  pinMode(motor1ENA, OUTPUT);

  pinMode(motor2IN3, OUTPUT);
  pinMode(motor2IN4, OUTPUT);
  pinMode(motor2ENB, OUTPUT);

  sensorServo.attach(servoPin);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(greenLightPin, OUTPUT);
  pinMode(redLightPin, OUTPUT);
}

void loop() {
  // Move the car forward
  moveForward();
  delay(2000);

  // Stop the car
  stopCar();
  delay(1000);

  // Rotate the sensor
  rotateSensor();
  delay(1000);

  // Check for obstacles
  if (checkObstacle()) {
    // Move backward if obstacle detected
    moveBackward();
    delay(2000);
    stopCar();
  }

  // Indicate the status with lights
  indicateStatus();
}

void moveForward() {
  digitalWrite(motor1IN1, HIGH);
  digitalWrite(motor1IN2, LOW);
  analogWrite(motor1ENA, 255);  // Full speed

  digitalWrite(motor2IN3, HIGH);
  digitalWrite(motor2IN4, LOW);
  analogWrite(motor2ENB, 255);  // Full speed
}

void moveBackward() {
  digitalWrite(motor1IN1, LOW);
  digitalWrite(motor1IN2, HIGH);
  analogWrite(motor1ENA, 255);  // Full speed

  digitalWrite(motor2IN3, LOW);
  digitalWrite(motor2IN4, HIGH);
  analogWrite(motor2ENB, 255);  // Full speed
}

void stopCar() {
  digitalWrite(motor1IN1, LOW);
  digitalWrite(motor1IN2, LOW);
  analogWrite(motor1ENA, 0);

  digitalWrite(motor2IN3, LOW);
  digitalWrite(motor2IN4, LOW);
  analogWrite(motor2ENB, 0);
}

void rotateSensor() {
  // Rotate the servo to 90 degrees
  sensorServo.write(90);
  delay(500);
  // Rotate back to 0 degrees
  sensorServo.write(0);
  delay(500);
}

bool checkObstacle() {
  // Trigger ultrasonic sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the duration of the echo pulse
  long duration = pulseIn(echoPin, HIGH);

  // Calculate distance based on the speed of sound
  // (assuming speed of sound is 343 meters per second)
  int distance = duration * 0.034 / 2;

  // If distance is less than a threshold, obstacle detected
  return distance < 30;
}

void indicateStatus() {
  // Green light for normal operation
  digitalWrite(greenLightPin, HIGH);
  digitalWrite(redLightPin, LOW);
  delay(500);

  // Red light for obstacle detected
  digitalWrite(greenLightPin, LOW);
  digitalWrite(redLightPin, HIGH);
  delay(500);
}
