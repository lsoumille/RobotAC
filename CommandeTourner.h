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
	static CommandeTourner * _instance;
	string _direction;

protected:
	CommandeTourner(string direction) : CommandeRobot("Tourner"), _direction(direction){};

public:
	Commande * constructeurVirtuel(LecteurCommande *);
	void execute();
};

#endif
