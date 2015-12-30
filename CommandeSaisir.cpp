/*
  Implementation des méthodes de CommandeSaisir.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandeSaisir.h"


CommandeSaisir * CommandeSaisir::_instance = new CommandeSaisir(0);

Commande * CommandeSaisir::constructeurVirtuel(LecteurCommande * lect){
	int poids = lect->getInt();
	return new CommandeSaisir(poids); 
}

void CommandeSaisir::execute() {
	try{
		_Robot->saisir(_obj);
		Commande::_pileCommande->push(this);
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Commande interdite" << endl;
	}
}

