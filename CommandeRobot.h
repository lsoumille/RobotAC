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
	static Robot* _Robot;
	CommandeRobot(string s):Commande(s){};
};

#endif
