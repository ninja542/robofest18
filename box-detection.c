#pragma config(Sensor, S4,     ultrasound,     sensorEV3_Ultrasonic)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
void numbleft(int turns){ // turn left 90 degrees
	while(turns>0){
		nMotorEncoder[motorB] = 0;
		while(nMotorEncoder[motorB]>-176){
			motor[motorB]=-25;
			motor[motorC]=25;
		}
		motor[motorB]=0;
		motor[motorC]=0;
		wait1Msec(250);
		turns--;
	}
}
void numbright(int turn){
	while(turn>0){
		nMotorEncoder[motorB] = 0;
		while(nMotorEncoder[motorB]<176){
			motor[motorB]=25;
			motor[motorC]=-25;
		}
		motor[motorB]=0;
		motor[motorC]=0;
		turn--;
	}
}
task main()
{


	int distance;
	distance = 15;
	int distanceThresh = 35;


	while(SensorValue(ultrasound)>distanceThresh) {
		motor[motorA] = 25;
		motor[motorB] = 25;
	}
	numbright(1);
}
