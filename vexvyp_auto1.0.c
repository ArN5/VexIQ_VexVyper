#pragma config(Motor,  motor1,          LeftMotor,     tmotorVexIQ, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motor6,          RightMotor,    tmotorVexIQ, PIDControl, reversed, driveRight, encoder)
#pragma config(Motor,  motor11,         armLeft,       tmotorVexIQ, PIDControl, reversed, encoder)
#pragma config(Motor,  motor12,         armRight,      tmotorVexIQ, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main(){
setMotorSpeed(motor11, 127);
setMotorSpeed(motor12, 127);
delay(2400)
setMotorSpeed(motor11, 0);
setMotorSpeed(motor12, 0);

setMotorSpeed(motor1, 127);
setMotorSpeed(motor6, 127);
delay(1350);
setMotorSpeed(motor1, 0);
setMotorSpeed(motor6, 0);
delay(100);
setMotorSpeed(motor11, -127);
setMotorSpeed(motor12, -127);
delay(4000)
setMotorSpeed(motor11, 0);
setMotorSpeed(motor12, 0);
delay(10000)

//---------------------------------------------------------------------------------------------------------------


}
