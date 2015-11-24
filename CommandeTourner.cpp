/*
  Implementation des méthodes de CommandeeTourner.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandeTourner.h"
#include "CommandeRobot.h"

CommandeTourner * CommandeTourner::_instance = new CommandeTourner();

Commande * CommandeTourner::constructeurVirtuel(LecteurCommande * lect){
	//récupération d'argument
	return new CommandeTourner();
}

void CommandeTourner::execute() {
	throw "Not yet implemented";
}

