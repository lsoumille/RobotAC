/*
  Implementation des méthodes de CommandeFige.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandeFiger.h"

CommandeFiger * CommandeFiger::_instance = new CommandeFiger();

Commande * CommandeFiger::constructeurVirtuel(LecteurCommande * lect){
	return new CommandeFiger();
}

void CommandeFiger::execute() {
	try {
		_Robot->figer();
		Commande::_pileCommande->push(this);	
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Commande interdite" << endl;
	}
	
}

