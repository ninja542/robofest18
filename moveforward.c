void resetEncoders(){
	nMotorEncoder[motorA] = 0;
	nMotorEncoder[motorB] = 0;
}
float distance(){
	float circum = 5.6 * 3.14159;
	float degdist = circum/360;
	float distance = degdist*((nMotorEncoder[motorB]+nMotorEncoder[motorA])/2);
	return distance;
}
task main()
{
	resetEncoders();
	float temp = distance();
	while(temp < 182){
		motor[motorA] = 30;
		motor[motorB] = 30;
		temp = distance();
	}
}
