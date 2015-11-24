/*
classe : CommandeAvancer.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef __CommandeAvancer_h__
#define __CommandeAvancer_h__

#include "CommandeRobot.h"
#include "Position.h"

class CommandeAvancer: public CommandeRobot
{
private:
	static CommandeAvancer * _instance;
	Position _pos;

protected:
	CommandeAvancer() : CommandeRobot("Avancer"), _pos(0,0){};

public:
	Commande * constructeurVirtuel(LecteurCommande *);
	void execute();
};

#endif
