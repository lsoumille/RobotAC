/*
  Implementation des méthodes de EtatRobot.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandePeser.h"

Commande * CommandePeser::constructeurVirtuel(LecteurCommande * lect){
	return new CommandePeser(_Robot);
}

void CommandePeser::execute() {
	try {
		_Robot->peser();
		//Commande::_pileCommande->push(this);	
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Commande interdite" << endl;
	}
}

