Robotic Hand

Overview
This project is a robotic hand that can open, close, and grip objects the way a human hand does. Each finger is driven by a servo motor and controlled by a microcontroller. The hand can be operated using [flex sensors / a glove / a smartphone app / a camera with hand tracking], so it copies the movement of the user’s own hand in real time.

Features

Five independently controlled fingers
Real-time response to user hand movements
Low-cost and easy to build using common components
Can pick up and hold light objects
Easy to extend with more sensors or wireless control

Components Used

Component	Quantity
Arduino Uno / Nano	1
Servo motors (SG90 / MG90S)	5
Flex sensors (or other input)	5
3D-printed or cardboard hand structure	1
Fishing line / nylon thread (for tendons)	as needed
Battery / external power supply	1
Jumper wires, breadboard	as needed

Working Principle

The input device (flex sensors or camera) detects the bending of each finger.
The Arduino reads these values and converts them into servo angles.
The servos pull or release the threads attached to each finger.
The robotic fingers bend or straighten to match the user’s movement.

Applications

Prosthetics and assistive devices
Handling hazardous materials remotely
Robotics education and STEM learning
Human-robot interaction research

Future Improvements

Add force or pressure sensors for a better grip
Wireless control using Bluetooth or Wi-Fi
AI-based gesture recognition
Stronger materials and a wrist rotation joint

How to Run

Assemble the hand and connect the servos as shown in the circuit diagram.
Upload the code from the code/ folder using the Arduino IDE.
Power the circuit and move your fingers to control the hand.
