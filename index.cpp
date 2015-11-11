#include "Robot.h"
#include "EtatRobot.h"
#include "EtatRobotFiger.h"
#include "EtatRobotEnRoute.h"
#include "AfficheurPrincipal.h"

#include <iostream>

using namespace std;

int main(){
	/*cout << EtatRobot::getInstance() << endl;
	cout << EtatRobot::getEtatInitial() << endl;
	cout << EtatRobotFiger::getInstance() << endl;*/
	//cout << *rob << endl;
	/*EtatRobotEnRoute * eRoute = EtatRobotEnRoute::getInstance();
	EtatRobot * eFiger = eRoute->figer();
	cout << eRoute << endl;
	cout << eFiger << endl;*/
	
	Robot rob;
	AfficheurPrincipal * affi1 = new AfficheurPrincipal();
	AfficheurPrincipal * affi2 = new AfficheurPrincipal();
	rob.attacher(affi1);
	rob.attacher(affi2);
	rob.notifier();
	rob.detacher(affi1);
	rob.notifier();
	//Robot * rob = new Robot(etat);
	//rob->saisir();
	return 0;
}