/*
classe : CommandeRobot.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef __CommandeRobot_h__
#define __CommandeRobot_h__

#include "Robot.h"
#include "Commande.h"

class CommandeRobot: public Commande
{
protected:
	Robot * _Robot;
	CommandeRobot(string s,  Robot * robot, bool reversible = true):Commande(s, reversible), _Robot(robot){};
};

#endif
