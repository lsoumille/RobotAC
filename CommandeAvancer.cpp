/*
  Implementation des méthodes de CommandeAvancer.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandeAvancer.h"

Commande * CommandeAvancer::constructeurVirtuel(LecteurCommande * lect){
	int x = lect->getInt();
	int y = lect->getInt();
	_oldPos = _Robot-> getPosition();
	return new CommandeAvancer(_Robot,x,y); 
}

void CommandeAvancer::execute() {
	try {
		_Robot->avancer(_pos.getx(), _pos.gety());
		Commande::_pileCommande->push(this);	
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Commande interdite" << endl;
	}
}

void CommandeAvancer::desexecute() {
	_Robot->avancer(_oldPos.getx(), _oldPos.gety());
	Commande::_pileCommande->pop();	
}


