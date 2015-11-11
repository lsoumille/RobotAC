/*
  Implementation des méthodes de EtatRobotAVide.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "EtatRobotAVide.h"
#include "EtatRobotAVideFacePlot.h"

EtatRobotAVide * EtatRobotAVide::_instance =  new EtatRobotAVide("EtatAVide");

EtatRobotAVide * EtatRobotAVide::getInstance(){
	return _instance;
}

EtatRobot * EtatRobotAVide::avancer(){
	return _instance;
}

EtatRobot * EtatRobotAVide::tourner(){
	return _instance;
}

EtatRobot * EtatRobotAVide::rencontrerPlot(){
	return EtatRobotAVideFacePlot::getInstance();
}