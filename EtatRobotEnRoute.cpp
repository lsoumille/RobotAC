/*
  Implementation des méthodes de EtatRobotEnRoute.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "EtatRobotEnRoute.h"
#include "EtatRobotFiger.h"

EtatRobotEnRoute * EtatRobotEnRoute::_instance = new EtatRobotEnRoute("EtatEnRoute");

EtatRobotEnRoute * EtatRobotEnRoute::getInstance(){
	return _instance;
}

EtatRobot * EtatRobotEnRoute::figer(){
	EtatRobotFiger::setEtatRobotPrecedent(_instance);
	return EtatRobotFiger::getInstance();
}
