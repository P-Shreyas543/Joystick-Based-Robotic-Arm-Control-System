# Robotic Arm Control Using Joystick Input

## Description

This project controls a robotic arm using joystick input. Four servos manage the arm's movements, with positions adjusted based on joystick inputs. The system reads potentiometer values and maps joystick movements to servo positions, providing real-time feedback via the serial monitor for precise control.

## Components Used

- **Servos**: Four servos for controlling the arm's horizontal, vertical, right, and left movements.
- **Potentiometers**: Four potentiometers for providing position feedback.
- **Joystick**: For user input to control the arm's movements.
- **Microcontroller**: An Arduino or similar to process inputs and control servos.

## Code Overview

- **Initialization**: Attaches servos to their pins and initializes serial communication.
- **Input Reading**: Reads joystick and potentiometer values.
- **Mapping**: Maps joystick inputs to servo positions.
- **Control**: Adjusts servo positions based on mapped values and displays feedback on the serial monitor.

## Wiring
![Joystick Controlled Robot Arm](https://github.com/user-attachments/assets/2914ff61-ba5a-4a3f-89ec-75772b6fea04)
1. Connect the servos to the specified pins on the microcontroller:
   - Horizontal Servo: Pin 5
   - Vertical Servo: Pin 6
   - Right Servo: Pin 9
   - Left Servo: Pin 10
2. Connect the potentiometers to analog input pins:
   - Horizontal Potentiometer: A0
   - Vertical Potentiometer: A1
   - Right Potentiometer: A2
   - Left Potentiometer: A3
3. Connect the joystick to the microcontroller according to your specific wiring setup.

## Installation

1. Clone the repository:
   ```bash
   git clone <https://github.com/P-Shreyas543/Joystick-Based-Robotic-Arm-Control-System/tree/main>
