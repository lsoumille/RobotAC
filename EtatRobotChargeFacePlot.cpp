/*
  Implementation des méthodes de EtatRobotChargeFacePlot.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "EtatRobotChargeFacePlot.h"
#include "EtatRobotEnCharge.h"
#include "EtatRobotAVideFacePlot.h"
#include "EtatRobotFiger.h"

//singleton
EtatRobotChargeFacePlot * EtatRobotChargeFacePlot::_instance = new EtatRobotChargeFacePlot("EtatEnChargeFacePlot");

EtatRobotChargeFacePlot * EtatRobotChargeFacePlot::getInstance(){
	return _instance;
}

/*
Retourne le singleton EtatRobotEnCharge
*/
EtatRobot * EtatRobotChargeFacePlot::tourner(){
	return EtatRobotEnCharge::getInstance();
}

/*
Retourne le single EtatAVideFacePlot
*/
EtatRobot * EtatRobotChargeFacePlot::poser(){
	return EtatRobotAVideFacePlot::getInstance();
}

EtatRobot * EtatRobotChargeFacePlot::peser(){
	return _instance;
}

EtatRobot * EtatRobotChargeFacePlot::evaluerPlot(){
	return _instance;
}

/*
Stocke l'etat avant le figeage 
Retourne le singleton EtatFiger
*/
EtatRobot * EtatRobotChargeFacePlot::figer(){
	EtatRobotFiger::setEtatRobotPrecedent(_instance);
	return EtatRobotFiger::getInstance();
}