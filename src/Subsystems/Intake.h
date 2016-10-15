#ifndef Intake_H
#define Intake_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Intake: public Subsystem
{
private:
	Talon* intakeMotor;
	AnalogInput* ir;

	bool enabled;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Intake();
	~Intake();

	void BallIn();
	void BallOut();
	void Stop();
	bool IsEnable ();
	void Enable();
	void Disable();
	bool DetectBall();
	double getInput();

};

#endif
