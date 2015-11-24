/*
  Implementation des méthodes de CommandeAvancer.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandeAvancer.h"

CommandeAvancer * CommandeAvancer::_instance = new CommandeAvancer();

Commande * CommandeAvancer::constructeurVirtuel(LecteurCommande * lect){
	//récupération d'argument
	return new CommandeAvancer(); 
}

void CommandeAvancer::execute() {
	_Robot->avancer(1,1);
}


