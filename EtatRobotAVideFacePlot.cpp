/*
  Implementation des méthodes de EtatRobotAVideFacePlot.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "EtatRobotAVideFacePlot.h"
#include "EtatRobotChargeFacePlot.h"
#include "EtatRobotAVide.h"
#include "EtatRobotFiger.h"

//singleton
EtatRobotAVideFacePlot * EtatRobotAVideFacePlot::_instance = new EtatRobotAVideFacePlot("EtatAVideFacePlot");

EtatRobotAVideFacePlot * EtatRobotAVideFacePlot::getInstance(){
	return _instance;
}

/*
Retourne le singleton de l'EtatRobotChargeFacePlot
*/
EtatRobot * EtatRobotAVideFacePlot::saisir(){
	return EtatRobotChargeFacePlot::getInstance();
}

/*
Retourne le singleton de l'EtatRobotAVide
*/
EtatRobot * EtatRobotAVideFacePlot::tourner(){
	return EtatRobotAVide::getInstance();
}

EtatRobot * EtatRobotAVideFacePlot::evaluerPlot(){
	return _instance;
}

/*
Stocke l'etat avant figeage
Retourne le singleton EtatFiger
*/
EtatRobot * EtatRobotAVideFacePlot::figer(){
	EtatRobotFiger::setEtatRobotPrecedent(_instance);
	return EtatRobotFiger::getInstance();
}