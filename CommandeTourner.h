/*
classe : CommandeTourner.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef __CommandeTourner_h__
#define __CommandeTourner_h__

#include "CommandeRobot.h"

class CommandeTourner: public CommandeRobot
{
private:
	string _direction;
	string _oldDirection;

public:
	CommandeTourner(Robot * robot, string direction = "N") : CommandeRobot("TOURNER", robot), _direction(direction){};
	Commande * constructeurVirtuel(LecteurCommande *);
	void execute();
	void desexecute();
};

#endif
