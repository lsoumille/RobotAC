/*
  Implementation des méthodes de EtatRobotChargeFacePlot.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "EtatRobotChargeFacePlot.h"


EtatRobotChargeFacePlot * EtatRobotChargeFacePlot::_instance = new EtatRobotChargeFacePlot();

EtatRobotChargeFacePlot::EtatRobotChargeFacePlot(){

}

EtatRobotChargeFacePlot * EtatRobotChargeFacePlot::getInstance(){
	return _instance;
}

EtatRobot * EtatRobotChargeFacePlot::tourner(){
	return EtatRobotEnCharge::getInstance();
}

EtatRobot * EtatRobotChargeFacePlot::poser(){
	return EtatRobotAVideFacePlot::getInstance();
}

EtatRobot * EtatRobotChargeFacePlot::peser(){
	return _instance;
}

EtatRobot * EtatRobotChargeFacePlot::evaluerPlot(){
	return _instance;
}