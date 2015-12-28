/*
classe : CommandeRepartir.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef __CommandeRepartir_h__
#define __CommandeRepartir_h__

#include "CommandeRobot.h"

class CommandeRepartir: public CommandeRobot
{
private:
	static CommandeRepartir * _instance;

protected:
	CommandeRepartir() : CommandeRobot("REPARTIR"){};

public:
	Commande * constructeurVirtuel(LecteurCommande *);
	void execute();
};

#endif
