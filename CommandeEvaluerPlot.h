/*
classe : CommandeEvaluerPlot.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef __CommandeEvaluerPlot_h__
#define __CommandeEvaluerPlot_h__

#include "CommandeRobot.h"

class CommandeEvaluerPlot: public CommandeRobot
{
private:
	static CommandeEvaluerPlot * _instance;

protected:
	CommandeEvaluerPlot() : CommandeRobot("EVALUERPLOT"){};

public:
	Commande * constructeurVirtuel(LecteurCommande *);
	void execute();
};

#endif
