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
private:
	static CommandeFiger * _instance;

protected:
	CommandeFiger():CommandeRobot("Figer"){};
	
public:
	Commande * constructeurVirtuel(LecteurCommande *);
	void execute();
};

#endif
