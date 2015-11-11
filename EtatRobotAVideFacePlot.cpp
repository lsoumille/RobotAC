/*
  Implementation des méthodes de EtatRobotAVideFacePlot.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "EtatRobotAVideFacePlot.h"
#include "EtatRobotChargeFacePlot.h"
#include "EtatRobotAVide.h"


EtatRobotAVideFacePlot * EtatRobotAVideFacePlot::_instance = new EtatRobotAVideFacePlot("EtatAVideFacePlot");

EtatRobotAVideFacePlot * EtatRobotAVideFacePlot::getInstance(){
	return _instance;
}

EtatRobot * EtatRobotAVideFacePlot::saisir(){
	return EtatRobotChargeFacePlot::getInstance();
}

EtatRobot * EtatRobotAVideFacePlot::tourner(){
	return EtatRobotAVide::getInstance();
}

EtatRobot * EtatRobotAVideFacePlot::evaluerPlot(){
	return _instance;
}