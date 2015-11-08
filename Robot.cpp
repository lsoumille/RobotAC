/*
  Implementation des méthodes de Robot.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "Robot.h"
#include "EtatRobotFiger.h"
#include <iostream>
using namespace std;

void Robot::saisir(){
	this->etat = new EtatRobotFiger();
	cout << "robot" << endl;
	this->etat->saisir();
}