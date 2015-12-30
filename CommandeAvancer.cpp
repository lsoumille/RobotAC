/*
  Implementation des méthodes de CommandeAvancer.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandeAvancer.h"

CommandeAvancer * CommandeAvancer::_instance = new CommandeAvancer(0,0);

Commande * CommandeAvancer::constructeurVirtuel(LecteurCommande * lect){
	int x = lect->getInt();
	int y = lect->getInt();
	_oldPos = _Robot-> getPosition();
	return new CommandeAvancer(x,y); 
}

void CommandeAvancer::execute() {
	try {
		_Robot->avancer(_pos.getx(), _pos.gety());
		Commande::_pileCommande->push(this);	
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Commande interdite" << endl;
	}
}


