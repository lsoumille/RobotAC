/*
  Implementation des méthodes de EtatRobotFiger.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "EtatRobotFiger.h"

EtatRobotFiger * EtatRobotFiger::_instance = new EtatRobotFiger("EtatFiger");
EtatRobot * EtatRobotFiger::_etatRobotPrecedent;

EtatRobotFiger * EtatRobotFiger::getInstance(){
	return _instance;
}

/*
Enregistre l'etat dans _etatRobotPrecedent
*/
void EtatRobotFiger::setEtatRobotPrecedent(EtatRobot * ep){
	_etatRobotPrecedent = ep;
}

/*
Renvoie l'etat avant figeage
*/
EtatRobot * EtatRobotFiger::repartir(){
	return _etatRobotPrecedent;
}
