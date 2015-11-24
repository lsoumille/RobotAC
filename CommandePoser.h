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
	static CommandePoser * _instance;

protected:
	CommandePoser() : CommandeRobot("Poser"){};

public:
	Commande * constructeurVirtuel(LecteurCommande *);
	void execute();
};

#endif
