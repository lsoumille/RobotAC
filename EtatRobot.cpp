/*
  Implementation des méthodes de EtatRobot.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "EtatRobot.h"
#include "EtatRobotAVide.h"

//singleton
EtatRobot * EtatRobot::_etatRobotInitial;  

EtatRobot * EtatRobot::getEtatInitial(){
	_etatRobotInitial = EtatRobotAVide::getInstance();
	return _etatRobotInitial;
}

EtatRobot * EtatRobot::saisir(){
	throw UnavailableFunction();
}	

EtatRobot * EtatRobot::avancer(){
	throw UnavailableFunction();
}

EtatRobot * EtatRobot::tourner(){
	throw UnavailableFunction();
}

EtatRobot * EtatRobot::poser(){
	throw UnavailableFunction();
}

EtatRobot * EtatRobot::peser(){
	throw UnavailableFunction();
}

EtatRobot * EtatRobot::rencontrerPlot(){
	throw UnavailableFunction();
}

EtatRobot * EtatRobot::figer(){
	throw UnavailableFunction();
}

EtatRobot * EtatRobot::repartir(){
	throw UnavailableFunction();
}

EtatRobot * EtatRobot::evaluerPlot(){
	throw UnavailableFunction();
}

EtatRobot * EtatRobot::afficher(){
	throw UnavailableFunction();
}

//getter
string EtatRobot::getName(){
	return _name;
}
