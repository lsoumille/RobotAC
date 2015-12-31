/*
classe : CommandePoser.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef __CommandePoser_h__
#define __CommandePoser_h__

#include "CommandeRobot.h"

// class CommandeRobot;
class CommandePoser;

class CommandePoser: public CommandeRobot
{
private:
	Objet _objInRobot;

public:
	CommandePoser(Robot * robot) : CommandeRobot("POSER", robot), _objInRobot(0){};
	Commande * constructeurVirtuel(LecteurCommande *);
	void execute();
	void desexecute();
};

#endif
