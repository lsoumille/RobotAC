#include "Robot.h"
#include "EtatRobot.h"
#include "EtatRobotFiger.h"

#include <iostream>

using namespace std;

int main(){
	cout << EtatRobot::getInstance() << endl;
	cout << EtatRobotFiger::getInstance() << endl;
	cout << EtatRobot::getInstance() << endl;
	cout << EtatRobot::getMap().size() << endl;
	//Robot * rob = new Robot(etat);
	//rob->saisir();
	return 0;
}