# Bomb Disposal Robot

## Overview

This project involves a bomb disposal robot controlled using an Arduino board and a NodeMCU, interfaced via a serial connection. The NodeMCU is connected to the Blynk cloud, where virtual pins are configured to sliders. Based on the slider values sent via the virtual pins, the NodeMCU communicates with the Arduino, which then performs various actions.

## Features

- Remote control via Blynk cloud
- Three independently controlled robotic fists
- Base movement control (forward, backward, left, right, stop)

## Components

- Arduino board
- NodeMCU
- Blynk cloud account
- Robotic base
- Three robotic fists
- Motors for each fist

## Functionality

### NodeMCU

The NodeMCU is connected to the Blynk cloud. It reads the slider values from virtual pins and sends commands to the Arduino via the serial interface.

### Arduino

The Arduino board receives commands from the NodeMCU and performs the corresponding actions. It controls the robot base and the three robotic fists.

### Fist 1 Actions

- **FIC**: Rotate the fist clockwise and anti-clockwise
- **FIG**: Grip using the motor fist
- **FIL**: Release the motor fist
- **FIU**: Move the fist up and down

### Fist 2 Actions

- **F2C**: Rotate the fist clockwise and anti-clockwise
- **F2G**: Grip using the motor fist
- **F2L**: Release the motor fist
- **F2U**: Move the fist up and down

### Fist 3 Actions

- **F3C**: Rotate the fist clockwise and anti-clockwise
- **F3G**: Grip using the motor fist
- **F3L**: Release the motor fist
- **F3U**: Move the fist up and down

### Robot Base Actions

- **S**: Stop
- **B**: Move backwards
- **L**: Move left
- **R**: Move right
- **F**: Move forward

## Setup

1. **Hardware Setup**:
   - Connect the Arduino board to the NodeMCU via serial interface.
   - Assemble the robot base and attach the motors for the three fists.
   - Connect all components to their respective power sources.

2. **Software Setup**:
   - Create a Blynk account and set up a project with sliders for the virtual pins.
   - Upload the Arduino sketch to the Arduino board.
   - Upload the NodeMCU sketch to the NodeMCU.

3. **Blynk Configuration**:
   - Configure virtual pins in the Blynk app to control the sliders.
   - Set up actions for each slider to send values to the NodeMCU.

## Usage

1. **Connect to the Blynk Cloud**:
   - Open the Blynk app and connect to your project.
   - Ensure the NodeMCU is connected to the internet and the Blynk cloud.

2. **Control the Robot**:
   - Use the sliders in the Blynk app to send commands to the NodeMCU.
   - The NodeMCU will send the commands to the Arduino via the serial interface.
   - The Arduino will execute the commands to control the robot base and the three fists.
## Circuit Connection: 

**Wire the circuit as show in below Schematic**
![Bomb Disposable Robot Schematic ](https://drive.google.com/uc?id=1P2XJptm7uKwOsZqbQ9-65AqQO_VFQ9)


## Troubleshooting

- Ensure all connections are secure and correct.
- Verify that the NodeMCU is connected to the internet and the Blynk cloud.
- Check the serial communication between the NodeMCU and the Arduino.
- Ensure the motors and power sources are functioning properly.

## Conclusion

This bomb disposal robot project demonstrates the integration of Arduino, NodeMCU, and Blynk cloud for remote control of a robotic system. The modular design allows for independent control of multiple robotic fists and a mobile base, making it a versatile tool for handling dangerous objects.

