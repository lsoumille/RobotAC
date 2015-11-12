/*
  Implementation des méthodes de EtatRobotEnCharge.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "EtatRobotEnCharge.h"
#include "EtatRobotChargeFacePlot.h"
#include "EtatRobotFiger.h"

//singleton
EtatRobotEnCharge * EtatRobotEnCharge::_instance =  new EtatRobotEnCharge("EtatEnCharge");

EtatRobotEnCharge * EtatRobotEnCharge::getInstance(){
	return _instance;
}

EtatRobot * EtatRobotEnCharge::avancer(){
	return _instance;
}

EtatRobot * EtatRobotEnCharge::peser(){
	return _instance;
}

EtatRobot * EtatRobotEnCharge::tourner(){
	return _instance;
}

/*
Retourne le singleton de l'EtatRobotChargeFacePlot
*/
EtatRobot * EtatRobotEnCharge::rencontrerPlot(){
	return EtatRobotChargeFacePlot::getInstance();
}

/*
Stocke l'etat avant figeage
Retourne le singleton EtatFiger
*/
EtatRobot * EtatRobotEnCharge::figer(){
	EtatRobotFiger::setEtatRobotPrecedent(_instance);
	return EtatRobotFiger::getInstance();
}