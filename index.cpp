#include "Robot.h"
#include "EtatRobot.h"

#include <iostream>

using namespace std;

int main(){
	cout << EtatRobot::getInstance() << endl;
	//Robot * rob = new Robot(etat);
	//rob->saisir();
	return 0;
}