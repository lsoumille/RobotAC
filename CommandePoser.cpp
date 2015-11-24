/*
  Implementation des méthodes de CommandePoser.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandePoser.h"

CommandePoser * CommandePoser::_instance = new CommandePoser();

Commande * CommandePoser::constructeurVirtuel(LecteurCommande * lect){
	//récupération d'argument
	return new CommandePoser(); 
}

void CommandePoser::execute() {
	throw "Not yet implemented";
}

