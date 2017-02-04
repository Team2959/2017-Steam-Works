/*
 * StartShootConveyor.h
 *
 *  Created on: Feb 4, 2017
 *      Author: CW
 */

#ifndef SRC_COMMANDS_STARTSHOOTERCONVEYORCOMMAND_H_
#define SRC_COMMANDS_STARTSHOOTERCONVEYORCOMMAND_H_

#include <CommandBase.h>

class StartShooterConveyorCommand: public CommandBase
{
public:

	StartShooterConveyorCommand(ShooterAndLoader::ShooterSide side);
	virtual ~StartShooterConveyorCommand();

	void Initialize() override;
	void End() override;
	void Interrupted() override;
	bool IsFinished() override;

private:
	ShooterAndLoader::ShooterSide m_shooterSide;
};

#endif /* SRC_COMMANDS_STARTSHOOTERCONVEYORCOMMAND_H_ */