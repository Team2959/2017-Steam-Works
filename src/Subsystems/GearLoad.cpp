/*
 * GearLoad.cpp
 *
 *  Created on: Feb 24, 2017
 *      Author: mriri
 */

#include <Subsystems/GearLoad.h>
#include <RobotMap.h>
#include "WPILib.h"

GearLoad::GearLoad() : Subsystem("GearLoad")
{
	GearLoadReady.reset(new DigitalInput(GEAR_LOAD_READY_DIO));
	GearPickup.reset(new Spark(GEAR_PICK_UP_ROLLER_PWM));

	LiveWindow::GetInstance()->AddActuator("GearLoad", "Gear Pickup Roller CIM", GearPickup.get());
}

GearLoad::~GearLoad()
{
}

void GearLoad::Stop()
{
	GearPickup->Set(0.0);
}

void GearLoad::LoadGear()
{
	GearPickup->Set(1.0);
}

bool GearLoad::GetGearLoadReady()
{
	return !GearLoadReady->Get();
}
