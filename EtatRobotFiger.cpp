#include "EtatRobotFiger.h"
#include <iostream>

using namespace std;

EtatRobotFiger * EtatRobotFiger::_instance;

EtatRobotFiger * EtatRobotFiger::getInstance(){
	if(! _instance)
		_instance = new EtatRobotFiger("EtatRobotFiger");
	return _instance;
}

EtatRobot * EtatRobotFiger::saisir(){
	return this;
}