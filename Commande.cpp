/*
  Implementation des méthodes de Commande.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "Commande.h"

//LecteurCommande * Commande::_LecteurCommande = new LecteurCommande();
stack<Commande *> * Commande::_pileCommande = new stack<Commande *>;

Commande::Commande(string nom, bool isReversible){
	commandesInscrites()[nom] = this;
	_reversible = isReversible;
}

map<string, Commande*>& Commande::commandesInscrites(){
	static map<string, Commande*>* docInscrits = new map<string, Commande*>();
	return *docInscrits;
}

Commande * Commande::nouvelleCommande(string nom, LecteurCommande * lect){
	return commandesInscrites()[nom]->constructeurVirtuel(lect);
}

void Commande::desexecute(){
	throw Commande::UnavailableReverse();
}