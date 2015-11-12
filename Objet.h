/*
classe : Objet.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef _OBJET_H_
#define _OBJET_H_

class Objet {

	private:
		int _poids;

	public:
		Objet(int p): _poids(p){};

		int getPoids();
};

#endif
