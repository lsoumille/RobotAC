/*
  Implementation des méthodes de EtatRobot.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "EtatRobot.h"
#include <iostream>
#include "EtatRobotFiger.h"
#include "EtatRobotAVide.h"

EtatRobot * EtatRobot::_instance =  new EtatRobot("EtatRobot");
EtatRobot * EtatRobot::_etatRobotInitial;  

EtatRobot * EtatRobot::getEtatInitial(){
	_etatRobotInitial = EtatRobotFiger::getInstance();
	_etatRobotInitial = EtatRobotAVide::getInstance();
	return _etatRobotInitial;
}

EtatRobot * EtatRobot::getInstance(){
	return _instance;
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

string EtatRobot::getName(){
	return _name;
}
