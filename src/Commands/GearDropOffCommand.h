/*
 * GearDropOffCommand.h
 *
 *  Created on: Feb 6, 2017
 *      Author: CW
 */

#ifndef SRC_COMMANDS_GEARDROPOFFCOMMAND_H_
#define SRC_COMMANDS_GEARDROPOFFCOMMAND_H_

#include "WPILib.h"
#include <Subsystems/SoftStart.h>

class GearDropOffCommand: public Command
{
public:
	GearDropOffCommand(bool open);
	virtual ~GearDropOffCommand();

	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	bool m_open;

	SoftStart ramp { 300, 20 };
};

#endif /* SRC_COMMANDS_GEARDROPOFFCOMMAND_H_ */
