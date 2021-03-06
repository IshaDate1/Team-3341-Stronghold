#include "Intake.h"
#include "../RobotMap.h"

Intake::Intake() :
		Subsystem("Intake")
{
	intakeMotor= new Talon (INTAKE);
	enabled = false;
	ir= new AnalogInput (INPUT);


}

Intake::~Intake(){
delete intakeMotor;
delete ir;
intakeMotor = NULL;
ir= NULL;
}

void Intake::BallIn() {
	if (enabled)
		intakeMotor -> SetSpeed(0.6);
}

void Intake::BallOut(){
	if (enabled)
		intakeMotor -> SetSpeed(-0.6);
}


void Intake::Stop() {
	intakeMotor->SetSpeed(0);
}


bool Intake::IsEnable() {
	return enabled;

}


void Intake::Enable() {
	enabled = true;
}


void Intake::Disable() {
	enabled = false;
}


bool Intake::DetectBall() {
	if (getInput() > 10)
		return false;
	return true;
}


double Intake::getInput() {
	return ir->GetValue();
}


