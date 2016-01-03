/*
  Implementation des méthodes de CommandeFige.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandeFiger.h"

Commande * CommandeFiger::constructeurVirtuel(LecteurCommande * lect){
	return new CommandeFiger(_Robot);
}

void CommandeFiger::execute(){
	try {
		_Robot->figer();
		Commande::_pileCommande->push(this);	
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Commande interdite" << endl;
	}
}

void CommandeFiger::desexecute(){
	try {
		_Robot->repartir();
		Commande::_pileCommande->pop();	
	} catch(EtatRobot::UnavailableFunction) {
		throw Commande::UnavailableReverse();
	}
		
}

