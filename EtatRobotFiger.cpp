/*
  Implementation des méthodes de EtatRobotFiger.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "EtatRobotFiger.h"

EtatRobotFiger * EtatRobotFiger::_instance = new EtatRobotFiger();
EtatRobot * EtatRobotFiger::_etatRobotPrecedent;

EtatRobotFiger::EtatRobotFiger(){

}

EtatRobotFiger * EtatRobotFiger::getInstance(){
	return _instance;
}

void EtatRobotFiger::setEtatRobotPrecedent(EtatRobot * ep){
	_etatRobotPrecedent = ep;
}

EtatRobot * EtatRobotFiger::repartir(){
	return _etatRobotPrecedent;
}
