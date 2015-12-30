/*
  Implementation des méthodes de CommandeRepartir.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandeRepartir.h"
#include "CommandeRobot.h"

CommandeRepartir * CommandeRepartir::_instance = new CommandeRepartir();

Commande * CommandeRepartir::constructeurVirtuel(LecteurCommande * lect){
	return new CommandeRepartir(); 
}

void CommandeRepartir::execute() {
	try {
		_Robot->repartir();
		Commande::_pileCommande->push(this);	
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Commande interdite" << endl;
	}
	
}

