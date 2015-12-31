/*
classe : CommandeFiger.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef __CommandeFiger_h__
#define __CommandeFiger_h__

#include "CommandeRobot.h"

class CommandeFiger: public CommandeRobot
{
	
public:
	CommandeFiger(Robot * robot):CommandeRobot("FIGER", robot){};
	Commande * constructeurVirtuel(LecteurCommande *);
	void execute();
	void desexecute();
};

#endif
