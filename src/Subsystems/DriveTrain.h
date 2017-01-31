/*
 * DriveTrain.h
 *
 *  Created on: Jan 21, 2017
 *      Author: Kevin
 */

#ifndef SRC_SUBSYSTEMS_DRIVETRAIN_H_
#define SRC_SUBSYSTEMS_DRIVETRAIN_H_

#include <Commands/Subsystem.h>
#include "Joystick.h"
#include "RobotDrive.h"
#include "VictorSP.h"
#include "RobotMap.h"

class DriveTrain: public frc::Subsystem
{
	// Put members here!
	//Jarod, Cole, and JC contributed in this!
private:
	frc::VictorSP m_LeftMotor1
	{ LEFT_MOTOR1_PWM };
	frc::VictorSP m_LeftMotor2
	{ LEFT_MOTOR2_PWM };
	frc::VictorSP m_RightMotor1
	{ RIGHT_MOTOR1_PWM };
	frc::VictorSP m_RightMotor2
	{ RIGHT_MOTOR2_PWM };

	frc::RobotDrive m_TankDrive
	{ m_LeftMotor1, m_LeftMotor2, m_RightMotor1, m_RightMotor2 };

public:
	DriveTrain();
	virtual ~DriveTrain();

	void InitDefaultCommand() override;

	// put public methods here!
	void TankDrive(double leftSide, double rightSide);
	void TankDrive(frc::Joystick * pJoyStick);
	void Stop();
};

#endif /* SRC_SUBSYSTEMS_DRIVETRAIN_H_ */
