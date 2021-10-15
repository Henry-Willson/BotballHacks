#include <stdio.h>
#include <kipr/botball.h>

/*
	Harry's Botball Movement Functions

	Made with the intent for simple calibration, and ease of use.
	Based on Harry's 2019 unreadable code, and mathematics.

	Notes:
	 * Units
		- cm/s (speed)
		- cm (distance)
	 * Asymmetric calibration
*/


// Mathematical constants
#define deg2rad	0.0174532925199432;


// Calibration constants
#define leftMotor		1
#define rightMotor		0

#define wheelDistance	1.0 	// distance between from wheel to wheel

#define leftMotorWeight		1.0	// adjust until it travels 1 cm/s straight when at 1 velIRL
#define rightMotorWeight	1.0

#define maxVelIRL	10.0		// compute by: 1000/max(leftMotorWeight,rightMotorWeight)


// Movement functions
void motorBoth(double velIRL){	// moves both motors at specified velocity
	mav(leftMotor,	velIRL*leftMotorWeight);
	mav(rightMotor,	velIRL*rightMotorWeight);
}

void moveCentimeter(double cm){ // moves specified distance at a maximum velocity
	motorBoth(maxVelIRL);

	msleep(1000 * cm/maxVelIRL); // 1000 to convert seconds to milliseconds

	ao();
}

void moveCentimeterAtSpeed(double cm, double velIRL){ // moves a specified centimeters at a specified velocity
	motorBoth(velIRL);

	msleep(1000 * cm/velIRL);

	ao();
}

void rotate(double deg){ // rotates to a specified degree at maximum rpm
	mav(leftMotor,	-maxVelIRL*leftMotorWeight);
	mav(rightMotor,	maxVelIRL*rightMotorWeight);

	msleep(1000 * wheelDistance/2 * deg*deg2rad/maxVelIRL); // convert degrees to radians then

	ao();
}


int main()
{
	return 0;
}
