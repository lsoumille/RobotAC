/*
  Implementation des méthodes de CommandeeTourner.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandeTourner.h"
#include "CommandeRobot.h"

Commande * CommandeTourner::constructeurVirtuel(LecteurCommande * lect){
	string dir = lect->getDirection();
	_oldDirection = _Robot->getDirection();
	return new CommandeTourner(_Robot, dir);
}

void CommandeTourner::execute(){
	try {
		_Robot->tourner(_direction);
		Commande::_pileCommande->push(this);	
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Commande indisponible" << endl;
	}
}

void CommandeTourner::desexecute(){
	try {
		_Robot->tourner(_oldDirection);
		Commande::_pileCommande->pop();		
	} catch(EtatRobot::UnavailableFunction) {
		throw UnavailableReverse();
	}
}

