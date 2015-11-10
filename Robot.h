/*
classe : Robot.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef _ROBOT_H_
#define _ROBOT_H_

#include "EtatRobot.h"
#include "Objet.h"
#include "Plot.h"

class Robot{

private:
	EtatRobot * _etat;
	Objet * _objetTenu;
	
public:
	Robot(EtatRobot et):_etat(&et){};

	void saisir(Objet O);
	void avancer(int x, int y);
	void tourner(string direction);
	void poser();
	int peser();
	void rencontrerPlot(Plot p);
	int evaluerPlot();
	void figer();
	void repartir();
	void afficher();
};

#endif