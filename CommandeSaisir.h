/*
classe : CommandeSaisir.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef __CommandeSaisir_h__
#define __CommandeSaisir_h__

#include "CommandeRobot.h"

class CommandeSaisir: public CommandeRobot
{
private:
	static CommandeSaisir * _instance;
	Objet _obj;

protected:
	CommandeSaisir(int poids) : CommandeRobot("SAISIR"), _obj(poids){};

public:
	Commande * constructeurVirtuel(LecteurCommande *);
	void execute();
};

#endif
