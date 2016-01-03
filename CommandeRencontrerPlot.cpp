/*
  Implementation des méthodes de CommandeRencontrerPlot.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/;

#include "CommandeRencontrerPlot.h"


Commande * CommandeRencontrerPlot::constructeurVirtuel(LecteurCommande * lect){
	int hauteur = lect->getInt();
	return new CommandeRencontrerPlot(_Robot, hauteur); 
}

void CommandeRencontrerPlot::execute() {
	try {
		_Robot->rencontrerPlot(_plot);		
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Commande interdite" << endl;
	}
	
}

