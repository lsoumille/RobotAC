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
	Position _pos;
	Position _oldPos;

public:
	CommandeAvancer(Robot * robot, int x = 0, int y = 0) : CommandeRobot("AVANCER", robot), _pos(x,y){};
	Commande * constructeurVirtuel(LecteurCommande *);
	void execute();
	void desexecute();
};

#endif
