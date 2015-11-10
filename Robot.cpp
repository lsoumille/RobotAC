/*
  Implementation des méthodes de Robot.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "Robot.h"
#include "EtatRobotFiger.h"
#include <iostream>

using namespace std;

Robot::Robot(): _position(0,0),
				_direction("N"),
				_objetSaisi(0),
				_plot(0) {
	_etat = EtatRobotFiger::getInstance();
	_etat->initialiserEtats();
}

void Robot::saisir(Objet O){
	//this->etat = new EtatRobotFiger();
	//cout << "robot" << endl;
	//this->etat->saisir();
}