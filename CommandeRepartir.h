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

public:
	CommandeRepartir(Robot * robot ) : CommandeRobot("REPARTIR", robot){};
	Commande * constructeurVirtuel(LecteurCommande *);
	void execute();
	void desexecute();
};

#endif
