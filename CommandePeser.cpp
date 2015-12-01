/*
  Implementation des méthodes de EtatRobot.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandePeser.h"

CommandePeser * CommandePeser::_instance = new CommandePeser();

Commande * CommandePeser::constructeurVirtuel(LecteurCommande * lect){
	return new CommandePeser();
}

void CommandePeser::execute() {
	_Robot->peser();
}

