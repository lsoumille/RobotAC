/*
  Implementation des méthodes de CommandeeTourner.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandeTourner.h"
#include "CommandeRobot.h"

Commande * CommandeTourner::constructeurVirtuel(LecteurCommande * lect){
	string dir = lect->getDirection();
	return new CommandeTourner(_Robot, dir);
}

void CommandeTourner::execute(){
	try {
		_oldDirection = _Robot->getDirection();
		_Robot->tourner(_direction);
		Commande::_pileCommande->push(this);	
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Commande indisponible" << endl;
	}
}

void CommandeTourner::desexecute(){
	_Robot->tourner(_oldDirection);
	Commande::_pileCommande->pop();	
}

