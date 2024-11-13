# ArmMotion---A-gesture-controlled-robotic-arm
# ArmMotion: Gesture-Controlled Robotic Arm (Created in 2022)

ArmMotion is a gesture-controlled robotic arm project that interprets hand gestures to control a robotic arm using camera-based hand-tracking technology. The project combines Python and Arduino to send gesture data for actions such as servo adjustments and motor control.

## Table of Contents
- Project Overview
- Features
- System Requirements
- Hardware Setup
- Software Setup
- How It Works
- Code Overview
- How to Run

## Project Overview
ArmMotion uses computer vision to detect hand gestures and sends corresponding data to an Arduino, which controls the servos and motors of a robotic arm. This setup provides intuitive, gesture-based control for tasks like lifting, rotating, and manipulating objects.

## Features
- **Hand Gesture Recognition:** Detects and interprets finger and hand gestures using a camera.
- **Real-Time Control:** Sends data instantly to Arduino, enabling responsive arm movement.
- **Multi-Joint Control:** Controls multiple servos and DC motors simultaneously.
- **Expandable Design:** Can be adapted for additional motors or features.

## System Requirements
- Python 3.x
- Arduino IDE
- Libraries: `cvzone` (for hand tracking and serial communication), `opencv-python` (for camera input)

## Hardware Setup
- **Robotic Arm:** Includes two servos (connected to pins 9 and 10) and two DC motors controlled by an Adafruit motor shield on pins 1 and 4.
- **Microcontroller:** Arduino Uno (or compatible) with an Adafruit motor shield.
- **Camera:** Standard USB camera compatible with OpenCV.
- **Power Supply:** Proper power supply for servos and DC motors.

### Wiring
- Connect servos to pins 9 and 10 on the Arduino.
- Attach DC motors to the Adafruit motor shield (M1 and M4 ports).
- Connect the Arduino to your computer via USB.

## Software Setup
1. **Install Required Libraries**:
   ```bash
   pip install cvzone opencv-python

2. **Upload Arduino Code**:
   - Open the Arduino IDE, paste the Arduino code provided, select the correct board and port, and upload it to the Arduino.

## How It Works
- **Python Script**: Uses OpenCV and `cvzone`'s `HandDetector` to track hand gestures in real-time from the camera feed.
- **Gesture Data Transmission**: Sends interpreted gesture data to Arduino over serial communication.
- **Arduino Control Logic**: Arduino reads gesture data, decodes finger states, and controls the servo and DC motors accordingly.

## How to Run
1. **Set Up Hardware**: Connect all motors and servos according to the hardware setup.
2. **Upload Arduino Code**: Ensure the Arduino code is uploaded and the correct port is selected.
3. **Run Python Script**:
   ```bash
   python gesture_control.py
   ```
4. **Test Gestures**: Move your hands in front of the camera to control the robotic arm.

--- 
```
