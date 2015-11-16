/*
  Implementation des méthodes de EtatRobotAVide.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "EtatRobotAVide.h"
#include "EtatRobotAVideFacePlot.h"
#include "EtatRobotFiger.h"

//singleton
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

/*
Retourne le singleton de l'etat EtatRobotAVideFacePlot
*/
EtatRobot * EtatRobotAVide::rencontrerPlot(){
	return EtatRobotAVideFacePlot::getInstance();
}

/*
Stocke l'état avant figeage et retourne le singleton EtatFiger
*/
EtatRobot * EtatRobotAVide::figer(){
	EtatRobotFiger::setEtatRobotPrecedent(_instance);
	return EtatRobotFiger::getInstance();
}