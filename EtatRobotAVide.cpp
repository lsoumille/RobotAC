/*
  Implementation des méthodes de EtatRobotAVide.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "EtatRobotAVide.h"

EtatRobotAVide * EtatRobotAVide::_instance =  new EtatRobotAVide();

EtatRobotAVide::EtatRobotAVide(){

}

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