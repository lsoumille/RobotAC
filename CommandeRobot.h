/*
classe : EtatRobot.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef __CommandeRobot_h__
#define __CommandeRobot_h__

#include "Robot.h"
#include "Commande.h"

__abstract class CommandeRobot: public Commande
{
	public:
		Robot* _Robot;

		void execute();
};

#endif
