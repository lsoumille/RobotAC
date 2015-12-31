/*
classe : CommandeRencontrerPlot.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef __CommandeRencontrerPlot_h__
#define __CommandeRencontrerPlot_h__

#include "CommandeRobot.h"
#include "Plot.h"

class CommandeRencontrerPlot: public CommandeRobot
{
private:
	Plot _plot;

public:
	CommandeRencontrerPlot(Robot * robot, int haut = 0) : CommandeRobot("RENCONTRERPLOT", robot, false), _plot(haut){};
	Commande * constructeurVirtuel(LecteurCommande *);
	void execute();
};

#endif
