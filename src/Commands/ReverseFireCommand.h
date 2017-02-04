/*
 * ReverseFireCommand.h
 *
 *  Created on: Feb 3, 2017
 *      Author: CW
 */

#ifndef SRC_COMMANDS_REVERSEFIRECOMMAND_H_
#define SRC_COMMANDS_REVERSEFIRECOMMAND_H_

#include <CommandBase.h>

class ReverseFireCommand: public CommandBase
{
public:
	ReverseFireCommand();
	virtual ~ReverseFireCommand();

	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif /* SRC_COMMANDS_REVERSEFIRECOMMAND_H_ */
