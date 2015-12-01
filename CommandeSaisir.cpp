/*
  Implementation des méthodes de CommandeSaisir.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandeSaisir.h"


CommandeSaisir * CommandeSaisir::_instance = new CommandeSaisir();

Commande * CommandeSaisir::constructeurVirtuel(LecteurCommande * lect){
	//récupération d'argument
	return new CommandeSaisir(); 
}

void CommandeSaisir::execute() {
	_Robot->saisir(_obj);
}

