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
	Objet _obj;	

public:
	CommandeSaisir(Robot * robot, int poids = 0) : CommandeRobot("SAISIR", robot), _obj(poids){};
	Commande * constructeurVirtuel(LecteurCommande *);
	void execute();
	void desexecute();
};

#endif
