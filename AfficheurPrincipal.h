/*
classe : AfficheurPrincipal.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef _AFFICHEUR_PRINCIPAL_H_
#define _AFFICHEUR_PRINCIPAL_H_

#include "Afficheur.h"
#include "Robot.h"

class AfficheurPrincipal : public Afficheur{
	
	public:
		AfficheurPrincipal(){};
		void afficher(Robot *);
};

#endif