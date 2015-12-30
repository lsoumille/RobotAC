/*
  Implementation des méthodes de CommandeRencontrerPlot.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/;

#include "CommandeRencontrerPlot.h"

CommandeRencontrerPlot * CommandeRencontrerPlot::_instance = new CommandeRencontrerPlot(0);

Commande * CommandeRencontrerPlot::constructeurVirtuel(LecteurCommande * lect){
	int hauteur = lect->getInt();
	return new CommandeRencontrerPlot(hauteur); 
}

void CommandeRencontrerPlot::execute() {
	try {
		_Robot->rencontrerPlot(_plot);	
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Commande interdite" << endl;
	}
	
}

