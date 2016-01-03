/*
  Implementation des méthodes de Commande.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "Commande.h"

stack<Commande *> * Commande::_pileCommande = new stack<Commande *>;

Commande::Commande(string nom, bool isReversible){
	commandesDisponibles()[nom] = this;
	_reversible = isReversible;
}

map<string, Commande*>& Commande::commandesDisponibles(){
	static map<string, Commande*>* cmdDispos = new map<string, Commande*>();
	return *cmdDispos;
}

Commande * Commande::nouvelleCommande(string nom, LecteurCommande * lect){
	return commandesDisponibles()[nom]->constructeurVirtuel(lect);
}

void Commande::desexecute(){
	throw Commande::UnavailableReverse();
}