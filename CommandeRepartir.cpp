/*
  Implementation des méthodes de CommandeRepartir.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandeRepartir.h"

Commande * CommandeRepartir::constructeurVirtuel(LecteurCommande * lect){
	return new CommandeRepartir(_Robot); 
}

void CommandeRepartir::execute(){
	try {
		_Robot->repartir();
		Commande::_pileCommande->push(this);	
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Commande interdite" << endl;
	}	
}

void CommandeRepartir::desexecute(){
	try {
		_Robot->figer();
		Commande::_pileCommande->pop();	
	} catch(EtatRobot::UnavailableFunction) {
		throw UnavailableReverse();
	}
}

