/*
  Implementation des méthodes de CommandeeTourner.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandeTourner.h"
#include "CommandeRobot.h"

CommandeTourner * CommandeTourner::_instance = new CommandeTourner("N");

Commande * CommandeTourner::constructeurVirtuel(LecteurCommande * lect){
	string dir = lect->getStr();
	return new CommandeTourner(dir);
}

void CommandeTourner::execute() {
	try {
		_Robot->tourner(_direction);
		Commande::_pileCommande->push(this);	
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Commande indisponible" << endl;
	}
	
}

