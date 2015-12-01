/*
  Implementation des méthodes de CommandeRepartir.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandeRepartir.h"
#include "CommandeRobot.h"

CommandeRepartir * CommandeRepartir::_instance = new CommandeRepartir();

Commande * CommandeRepartir::constructeurVirtuel(LecteurCommande * lect){
	//récupération d'argument
	return new CommandeRepartir(); 
}

void CommandeRepartir::execute() {
	_Robot->repartir();
}

