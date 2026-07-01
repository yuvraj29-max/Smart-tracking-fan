#include <Servo.h>

Servo fanServo;

// Ultrasonic Pins
#define TRIG_LEFT 2
#define ECHO_LEFT 3

#define TRIG_CENTER 4
#define ECHO_CENTER 5

#define TRIG_RIGHT 6
#define ECHO_RIGHT 7

// Motor Driver Pins
#define IN1 10
#define IN2 11
#define ENA 12

int threshold = 80;   // Detect within 80 cm

long readDistance(int trig, int echo)
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);

  digitalWrite(trig, LOW);

  long duration = pulseIn(echo, HIGH, 25000);

  if(duration == 0)
    return 500;

  return duration * 0.034 / 2;
}

void setup()
{
  Serial.begin(9600);

  pinMode(TRIG_LEFT, OUTPUT);
  pinMode(ECHO_LEFT, INPUT);

  pinMode(TRIG_CENTER, OUTPUT);
  pinMode(ECHO_CENTER, INPUT);

  pinMode(TRIG_RIGHT, OUTPUT);
  pinMode(ECHO_RIGHT, INPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);

  fanServo.attach(9);

  fanServo.write(90);

  // Start Fan
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(ENA, HIGH);
}

void loop()
{
  long left = readDistance(TRIG_LEFT, ECHO_LEFT);
  long center = readDistance(TRIG_CENTER, ECHO_CENTER);
  long right = readDistance(TRIG_RIGHT, ECHO_RIGHT);

  Serial.print("L=");
  Serial.print(left);

  Serial.print(" C=");
  Serial.print(center);

  Serial.print(" R=");
  Serial.println(right);

  bool L = left < threshold;
  bool C = center < threshold;
  bool R = right < threshold;

  if(L)
  {
    fanServo.write(30);      // Turn Left
  }
  else if(C)
  {
    fanServo.write(90);      // Center
  }
  else if(R)
  {
    fanServo.write(150);     // Turn Right
  }
  else
  {
    fanServo.write(90);      // No person
  }

  delay(150);
}