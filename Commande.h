
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
	bool _reversible;

protected:
	static stack<Commande *> * _pileCommande;
	Commande(string, bool = true);

public:
	virtual void execute() = 0;
	virtual void desexecute();
	static map<string,Commande*>& commandesDisponibles();
	static Commande * nouvelleCommande(string, LecteurCommande *);
	virtual Commande * constructeurVirtuel(LecteurCommande *) = 0;
	bool isReversible(){ return _reversible; } 

	class UnavailableReverse{}; 
};

#endif
