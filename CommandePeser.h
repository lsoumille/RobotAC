/*
classe : CommandePeser.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef __CommandePeser_h__
#define __CommandePeser_h__

#include "CommandeRobot.h"

class CommandePeser: public CommandeRobot
{

public:
	CommandePeser(Robot * robot) : CommandeRobot("PESER", robot, false){};
	Commande * constructeurVirtuel(LecteurCommande *);
	void execute();
};

#endif
