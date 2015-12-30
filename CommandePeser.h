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
private:
	static CommandePeser * _instance;

protected:
	CommandePeser() : CommandeRobot("PESER", false){};

public:
	Commande * constructeurVirtuel(LecteurCommande *);
	void execute();
};

#endif
