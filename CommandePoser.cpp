/*
  Implementation des méthodes de CommandePoser.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandePoser.h"

CommandePoser * CommandePoser::_instance = new CommandePoser();

Commande * CommandePoser::constructeurVirtuel(LecteurCommande * lect){
	return new CommandePoser(); 
}

void CommandePoser::execute() {
	_Robot->poser();
}

