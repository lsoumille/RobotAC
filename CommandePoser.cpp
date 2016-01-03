/*
  Implementation des méthodes de CommandePoser.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandePoser.h"

Commande * CommandePoser::constructeurVirtuel(LecteurCommande * lect){
	_objInRobot = _Robot->getObjet();
	return new CommandePoser(_Robot); 
}

void CommandePoser::execute(){
	try {
		_Robot->poser();
		Commande::_pileCommande->push(this);	
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Commande interdite" << endl;
	}
}

void CommandePoser::desexecute() {
	try {
		_Robot->saisir(_objInRobot);
		Commande::_pileCommande->pop();	
	} catch(EtatRobot::UnavailableFunction) {
		throw Commande::UnavailableReverse();
	}
	
}



