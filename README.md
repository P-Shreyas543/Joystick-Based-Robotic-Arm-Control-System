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

1. **Download and Install the Arduino IDE**
   - Go to the [Arduino IDE download page](https://www.arduino.cc/en/software) and download the version suitable for your operating system.
   - Install the Arduino IDE following the provided instructions.

2. **Install Required Libraries**
   - Open the Arduino IDE.
   - Go to **Sketch** > **Include Library** > **Manage Libraries...**
   - In the Library Manager, search for "Servo" and install the **Servo** library if it is not already installed.

3. **Clone the Repository**
   - Clone the repository to your local machine using:
     ```bash
     git clone <https://github.com/P-Shreyas543/Joystick-Based-Robotic-Arm-Control-System/tree/main>
     ```

4. **Open the Project**
   - Open the `RoboticArmControl.ino` file in the Arduino IDE.

5. **Upload the Code**
   - Connect your Arduino or compatible microcontroller to your computer using a USB cable.
   - Select the correct board and port in the Arduino IDE under **Tools** > **Board** and **Tools** > **Port**.
   - Click the **Upload** button to transfer the code to your microcontroller.
  
## Usage

1. **Power the Microcontroller and Servos**
   - Ensure that your microcontroller and servos are properly powered.

2. **Open the Serial Monitor**
   - In the Arduino IDE, open the serial monitor to view real-time feedback from the system.

3. **Control the Robotic Arm**
   - Use the joystick to control the movements of the robotic arm.

## Final Assembly of Robotic Arm with Joystick Control

![image](https://github.com/user-attachments/assets/7aeafe79-b6d5-49e4-a5eb-d6f6980a17eb)

## Acknowledgements

- [Arduino Servo Library](https://www.arduino.cc/en/Reference/Servo) for servo control.

