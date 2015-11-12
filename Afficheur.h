/*
classe : Afficheur.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef _AFFICHEUR_H_
#define _AFFICHEUR_H_

//declaration anticipée
class Robot;

class Afficheur{
	
	public:
		virtual void afficher(Robot *);
};

#endif