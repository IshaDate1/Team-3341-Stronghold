#ifndef MoveWall_H
#define MoveWall_H

#include "../CommandBase.h"
#include "WPILib.h"

class MoveWall: public CommandBase
{
public:
	MoveWall();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
