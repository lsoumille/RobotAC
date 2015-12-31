/*
  Implementation des méthodes de CommandePoser.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandePoser.h"

Commande * CommandePoser::constructeurVirtuel(LecteurCommande * lect){
	return new CommandePoser(_Robot); 
}

void CommandePoser::execute(){
	try {
		_objInRobot = _Robot->getObjet();
		_Robot->poser();
		Commande::_pileCommande->push(this);	
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Commande interdite" << endl;
	}
}

void CommandePoser::desexecute() {
	_Robot->saisir(_objInRobot);
	Commande::_pileCommande->pop();
}



