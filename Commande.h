
/*
classe : Commande.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef __Commande_h__
#define __Commande_h__

#include "LecteurCommande.h"
#include <map>
#include <stack>

using namespace std;

class LecteurCommande;

class Commande
{
private:
	static LecteurCommande * _LecteurCommande; 
	bool _reversible;

protected:
	static stack<Commande *> * _pileCommande;
	Commande(string, bool = true);

public:
	virtual void execute() = 0;
	static map<string,Commande*>& commandesInscrites();
	static Commande * nouvelleCommande(string);
	virtual Commande * constructeurVirtuel(LecteurCommande *) = 0; 
};

#endif
