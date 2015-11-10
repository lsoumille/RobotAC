#include "Robot.h"
#include "EtatRobot.h"
#include "EtatRobotFiger.h"
#include "EtatRobotEnRoute.h"

#include <iostream>

using namespace std;

int main(){
	//cout << EtatRobot::getInstance() << endl;
	//cout << EtatRobotFiger::getInstance() << endl;
	//cout << EtatRobot::getEtatInitial() << endl;
	//cout << *rob << endl;
	EtatRobotEnRoute * eRoute = EtatRobotEnRoute::getInstance();
	EtatRobot * eFiger = eRoute->figer();
	cout << eRoute << endl;
	cout << eFiger << endl;
	cout << EtatRobotFiger::getEtatRobotPrecedent() << endl;
	//Robot rob;
	//Robot * rob = new Robot(etat);
	//rob->saisir();
	return 0;
}