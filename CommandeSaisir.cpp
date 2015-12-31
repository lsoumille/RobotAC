/*
  Implementation des méthodes de CommandeSaisir.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandeSaisir.h"

Commande * CommandeSaisir::constructeurVirtuel(LecteurCommande * lect){
	int poids = lect->getInt();
	return new CommandeSaisir(_Robot, poids); 
}

void CommandeSaisir::execute() {
	try{
		_Robot->saisir(_obj);
		Commande::_pileCommande->push(this);
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Commande interdite" << endl;
	}
}

void CommandeSaisir::desexecute() {
	_Robot->poser();
	Commande::_pileCommande->pop();
}

