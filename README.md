# ESP32 Ultrasonic Obstacle Detector

## Overview

This project uses an ESP32 microcontroller and an HC-SR04 ultrasonic sensor to detect nearby obstacles and measure distance in real time.

The system continuously calculates the distance to objects in front of the sensor and alerts the user whenever an obstacle is detected within a predefined threshold.

---

## Features

* Real-time distance measurement
* Obstacle detection
* Adjustable warning threshold
* Serial Monitor output
* Built using ESP32 and HC-SR04

---

## Components Used

* ESP32 Development Board
* HC-SR04 Ultrasonic Sensor
* Jumper Wires
* USB Cable

---

## Wiring

| HC-SR04 | ESP32   |
| ------- | ------- |
| VCC     | V5      |
| GND     | GND     |
| TRIG    | GPIO 5  |
| ECHO    | GPIO 18 |

---

## How It Works

The HC-SR04 emits an ultrasonic pulse and measures the time required for the echo to return after bouncing off an object.

The ESP32 calculates the distance using the speed of sound and displays the result through the Serial Monitor.

When an object is detected within 20 cm, the system generates an obstacle warning.

---

## Applications

* Obstacle Avoidance Robots
* Autonomous Vehicles
* Parking Assistance Systems
* Distance Measurement Systems
* Robotics Projects

---

## Future Improvements

* Buzzer-based warning system
* OLED display integration
* Wireless monitoring dashboard
* Integration with autonomous robot platforms

---

## Author

Siva Karlapalem
