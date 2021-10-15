# BotballHacks - simple calibration and movement function for botball
BotballHacks was designed for the intent of ease of calibration and use of botball. The code provides a simple and non-convoluted method of calibrating the botball, and provide simple movement functions for all your botball needs. This was orginally designed in 2019 by Harrison with his unreadable code and mathematics.

## Contents
1. [Features](#Features)
2. [Getting Started](#Tutorial)
3. [Documentation](#Doc)

<A NAME = "Features"></A>
## Features
* Simple, non-convoluted method of calibration.
* Asymmetric calibration for uneven cars.
* Basic movement function `moveCentimeters()`, `rotate()`, and more.
* Automatic Calibration (Coming soon...)

<A NAME = "Tutorial"></A>
## Getting Started
**Note:** This is a work in progress at the moment better method coming soon
1. Copy and paste [the code](https://github.com/Henry-Willson/BotballHacks/blob/main/HarrysBotballCode.c) into your code
2. Calibrate your robot by adjusting the calibration constant need. For help you can find the calibration tutorial [here.](https://www.youtube.com/watch?v=dQw4w9WgXcQ)
```C
// Calibration constants
#define leftMotor   1
#define rightMotor  0

#define wheelDistance   1.0 	// distance between from wheel to wheel

#define leftMotorWeight   1.0	// adjust until it travels 1 cm/s straight when at 1 velIRL
#define rightMotorWeight  1.0

#define maxVelIRL   10.0        // compute by taking 1000 and dividing it by the maximum of leftMotorWeight or rightMotorWeight
```
3. After calibrating, your done! You can start using it for your botball needs.

<A NAME = "Doc"></A>
## Documentation
Here is a list of all the basic movement functions provided by BotballHacks.
### moveCentimeter()
```C
void moveCentimeter(double cm)
```
`moveCentimeter()` moves the botball `cm` centimeters at maximum speed.
### rotate()
```C
void rotate(double deg)
```
`rotate()` rotates the botball `deg` degrees anti-clockwise at maximum speed. For clockwise rotations input a negative value for `deg`.
### moveCentimeterAtSpeed()
```C
void moveCentimeterAtSpeed(double cm, double velIRL)
```
`moveCentimeter()` moves the botball `cm` centimeters at `velIRL` speed.
### motorBoth()
```C
void motorBoth(double velIRL)
```
`moveCentimeter()` moves the both wheel at `velIRL` speed.
