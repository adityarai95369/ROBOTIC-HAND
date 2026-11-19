#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

#define SERVO_FREQ 50

#define SERVOMIN 125
#define SERVOMAX 625

int angleToPulse(int angle)
{
  angle = constrain(angle, 0, 180);
  return map(angle, 0, 180, SERVOMIN, SERVOMAX);
}

void setup()
{
  Serial.begin(115200);

  pwm.begin();
  pwm.setPWMFreq(SERVO_FREQ);

  delay(500);

  // Initial Position
  pwm.setPWM(0, 0, angleToPulse(0));
  pwm.setPWM(1, 0, angleToPulse(0));
  pwm.setPWM(2, 0, angleToPulse(0));
  pwm.setPWM(3, 0, angleToPulse(0));
  pwm.setPWM(4, 0, angleToPulse(0));
}

void loop()
{
  if (Serial.available() >= 5)
  {
    int thumb  = Serial.read();
    int index  = Serial.read();
    int middle = Serial.read();
    int ring   = Serial.read();
    int little = Serial.read();

    thumb  = constrain(thumb, 0, 165);
    index  = constrain(index, 0, 170);
    middle = constrain(middle, 0, 175);
    ring   = constrain(ring, 0, 165);
    little = constrain(little, 0, 160);

    Serial.print("T:");
    Serial.print(thumb);
    Serial.print(" I:");
    Serial.print(index);
    Serial.print(" M:");
    Serial.print(middle);
    Serial.print(" R:");
    Serial.print(ring);
    Serial.print(" L:");
    Serial.println(little);

    pwm.setPWM(0, 0, angleToPulse(thumb));
    pwm.setPWM(1, 0, angleToPulse(index));
    pwm.setPWM(2, 0, angleToPulse(middle));
    pwm.setPWM(3, 0, angleToPulse(ring));
    pwm.setPWM(4, 0, angleToPulse(little));
  }
}
