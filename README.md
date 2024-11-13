# ArmMotion---A-gesture-controlled-robotic-arm
ArmMotion: Gesture-Controlled Robotic Arm
Created in 2022

ArmMotion is a gesture-controlled robotic arm project that interprets hand gestures to control the movement and actions of a robotic arm using a camera and hand-tracking technology. The project utilizes Python and Arduino to communicate gesture data for various robotic actions, including servo motor adjustments and DC motor control.

Table of Contents
Project Overview
Features
System Requirements
Hardware Setup
Software Setup
How It Works
Code Overview
How to Run
Project Overview
ArmMotion uses computer vision to detect hand gestures and sends corresponding data to an Arduino, which interprets the gestures to control a robotic arm's servos and motors. This setup allows for intuitive, gesture-based control, enabling tasks like lifting, rotating, and precise manipulation.

Features
Hand Gesture Recognition: Detects and interprets finger and hand gestures via a camera.
Real-Time Control: Sends data instantly to the Arduino, resulting in smooth, responsive arm movement.
Multi-Joint Control: Allows simultaneous control of multiple servos and DC motors for complex maneuvers.
Easy to Extend: Designed for adaptability to additional motors or functionalities.
System Requirements
Python 3.x
Arduino IDE
Libraries:
cvzone (for hand tracking and serial communication)
opencv-python (for camera handling)
Hardware Setup
Robotic Arm: Includes at least two servos (connected to pins 9 and 10) and two DC motors controlled by an Adafruit motor shield on pins 1 and 4.
Microcontroller: Arduino Uno (or compatible board) with an Adafruit motor shield.
Camera: Any standard USB camera compatible with OpenCV.
Power Supply: Ensure proper power supply for servos and DC motors.
Wiring
Connect servos to pins 9 and 10 on the Arduino.
Attach DC motors to the Adafruit motor shield (M1 and M4 ports).
Connect the Arduino to your computer via USB.
Software Setup
Install the necessary Python libraries:
bash
Copy code
pip install cvzone opencv-python
Upload the Arduino code to your Arduino board:
Open the Arduino IDE, paste the code provided, select the correct board and port, and upload.
How It Works
Python Script: Uses OpenCV and cvzone's HandDetector to track hand gestures in real time via camera feed.
Gesture Data Transmission: Interpreted gestures are sent as data to the Arduino over serial communication.
Arduino Control Logic: Arduino reads the data, decodes the specific finger states, and controls the servo and DC motors based on the gestures received.

How to Run
Set Up Hardware: Connect all motors and servos as per the hardware setup.
Upload Arduino Code: Ensure the Arduino code is uploaded and the correct port is selected.
Run Python Script:
Open a terminal and execute:
bash
Copy code
python gesture_control.py
Test Gestures: Start moving your hands in front of the camera to control the robotic arm.
