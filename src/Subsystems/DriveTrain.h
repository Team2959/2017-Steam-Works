/*
2 * DriveTrain.h
 *
 *  Created on: Jan 28, 2017
 *      Author: mriri
 */

#ifndef SRC_SUBSYSTEMS_DRIVETRAIN_H_
#define SRC_SUBSYSTEMS_DRIVETRAIN_H_

#include "WPILib.h"
#include <Commands/Subsystem.h>
#include <CANTalon.h>
#include <Subsystems/SoftStart.h>
#include <JoystickConditioning.h>

class DriveTrain: public Subsystem
{
private:
	std::shared_ptr<CANTalon> Left1MotorController;
	std::shared_ptr<CANTalon> Left2MotorController;
	std::shared_ptr<CANTalon> Right1MotorController;
	std::shared_ptr<CANTalon> Right2MotorController;

	std::unique_ptr<RobotDrive> DriveTank;

	SoftStart LeftSideSpeedRamping { 200, 200 };
	SoftStart RightSideSpeedRamping { 200, 200 };

	JoystickConditioning LeftConditioning { -0.1, 0.1, -0.2, 0.2 };
	JoystickConditioning RightConditioning { -0.1, 0.1, -0.2, 0.2 };

	bool m_DriveStraight;
	bool m_PowerReduction;
	bool m_InvertTank;

	const double MaxReducedPower = 0.75;

	void InitHardware();

public:
	DriveTrain();
	virtual ~DriveTrain();

	void InitDefaultCommand() override;

	void TankDrive(double leftSide, double rightSide);
	void TankDrive(std::shared_ptr<Joystick> JoyStick);
	void Stop();

	void SetInvertTank(bool invert);
	void SetDriveStraight(bool straight);
	void SetPowerReduction(bool reduce);
};

#endif /* SRC_SUBSYSTEMS_DRIVETRAIN_H_ */
