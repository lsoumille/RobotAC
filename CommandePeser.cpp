/*
  Implementation des méthodes de CommandePeser.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandePeser.h"

Commande * CommandePeser::constructeurVirtuel(LecteurCommande * lect){
	return new CommandePeser(_Robot);
}

void CommandePeser::execute() {
	try {
		_Robot->peser();
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Commande interdite" << endl;
	}
}

