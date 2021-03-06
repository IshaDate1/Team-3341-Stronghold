#include "EjectBall.h"

EjectBall::EjectBall()
{
	Requires(Intake);

}

// Called just before this Command runs the first time
void EjectBall::Initialize()
{
    intake ->Enable();
}

// Called repeatedly when this Command is scheduled to run
void EjectBall::Execute()
{
    intake -> BallOut();
}

// Make this return true when this Command no longer needs to run execute()
bool EjectBall::IsFinished()
{
	return !intake->IsEnabled();
}

// Called once after isFinished returns true
void EjectBall::End()
{
    intake->Stop();
    intake->Disable();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void EjectBall::Interrupted()
{

}
