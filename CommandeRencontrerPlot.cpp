/*
  Implementation des méthodes de CommandeRencontrerPlot.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/;

#include "CommandeRencontrerPlot.h"

CommandeRencontrerPlot * CommandeRencontrerPlot::_instance = new CommandeRencontrerPlot();

Commande * CommandeRencontrerPlot::constructeurVirtuel(LecteurCommande * lect){
	//récupération d'argument
	return new CommandeRencontrerPlot(); 
}

void CommandeRencontrerPlot::execute() {
	_Robot->rencontrerPlot(_plot);
}

