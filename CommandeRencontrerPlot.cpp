/*
  Implementation des méthodes de CommandeRencontrerPlot.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/;

#include "CommandeRencontrerPlot.h"

Commande * CommandeRencontrerPlot::constructeurVirtuel(LecteurCommande * lect){
	int hauteur = lect->getInt();
	cout << "virtuel rp" << endl;
	return new CommandeRencontrerPlot(_Robot, hauteur); 
}

void CommandeRencontrerPlot::execute() {
	try {
		_Robot->rencontrerPlot(_plot);	
		//Commande::_pileCommande->push(this);	
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Commande interdite" << endl;
	}
	
}

