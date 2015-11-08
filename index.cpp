#include "Robot.h"
#include "EtatRobotFiger.h"

int main(){
	EtatRobot etat;
	Robot * rob = new Robot(etat);
	rob->saisir();
	return 0;
}