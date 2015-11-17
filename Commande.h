
/*
classe : EtatRobot.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef __Commande_h__
#define __Commande_h__

#include "LecteurCommande.h"

__abstract class Commande
{
	private:
		LecteurCommande* _LecteurCommande;

	public:
		virtual void execute()
};

#endif
