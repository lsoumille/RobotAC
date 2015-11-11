/*
  Implementation des méthodes de EtatRobotAVideFacePlot.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "EtatRobotAVideFacePlot.h"


EtatRobotAVideFacePlot * EtatRobotAVideFacePlot::_instance = new EtatRobotAVideFacePlot();

EtatRobotAVideFacePlot::EtatRobotAVideFacePlot(){

}

EtatRobotAVideFacePlot * EtatRobotAVideFacePlot::getInstance(){
	return _instance;
}

EtatRobot * EtatRobotAVideFacePlot::saisir(){
	return EtatRobotEnChargeFacePlot::getInstance();
}

EtatRobot * EtatRobotAVideFacePlot::tourner(){
	return EtatRobotAVide::getInstance();
}

EtatRobot * EtatRobotAVideFacePlot::evaluerPlot(){
	return _instance;
}