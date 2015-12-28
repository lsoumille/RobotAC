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
	static CommandeRencontrerPlot * _instance;
	Plot _plot;

protected:
	CommandeRencontrerPlot(int haut) : CommandeRobot("RENCONTRERPLOT"), _plot(haut){};

public:
	Commande * constructeurVirtuel(LecteurCommande *);
	void execute();
};

#endif
