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
	CommandeAvancer(int x, int y) : CommandeRobot("AVANCER"), _pos(x,y){};

public:
	Commande * constructeurVirtuel(LecteurCommande *);
	void execute();
};

#endif
