/*
  Implementation des méthodes de EtatRobotEnCharge.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "EtatRobotEnCharge.h"
#include "EtatRobotChargeFacePlot.h"

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

EtatRobot * EtatRobotEnCharge::rencontrerPlot(){
	return EtatRobotChargeFacePlot::getInstance();
}