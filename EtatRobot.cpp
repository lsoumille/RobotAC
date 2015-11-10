#include "EtatRobot.h"
#include <iostream>
#include "EtatRobotFiger.h"

map<string, EtatRobot *> EtatRobot::_mapEtats;
EtatRobot * EtatRobot::_instance;

EtatRobot * EtatRobot::getInstance(){
	if(! _instance)
		_instance = new EtatRobot("EtatRobot");
	return _instance;
}

void initialiserEtats(){
	cout << "salut";
}

EtatRobot * EtatRobot::saisir(){
	throw UnavailableFunction();
}

EtatRobot * EtatRobot::avancer(){
	throw UnavailableFunction();
}

EtatRobot * EtatRobot::tourner(){
	throw UnavailableFunction();
}

EtatRobot * EtatRobot::poser(){
	throw UnavailableFunction();
}

EtatRobot * EtatRobot::peser(){
	throw UnavailableFunction();
}

EtatRobot * EtatRobot::rencontrerObstacle(){
	throw UnavailableFunction();
}

EtatRobot * EtatRobot::arreter(){
	throw UnavailableFunction();
}

EtatRobot * EtatRobot::repartir(){
	throw UnavailableFunction();
}

EtatRobot * EtatRobot::evaluerObstacle(){
	throw UnavailableFunction();
}

EtatRobot * EtatRobot::afficher(){
	throw UnavailableFunction();
}
