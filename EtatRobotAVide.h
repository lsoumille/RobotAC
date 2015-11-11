/*
classe : EtatRobotAVide.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef _ETAT_ROBOT_A_VIDE_H_
#define _ETAT_ROBOT_A_VIDE_H_

#include <string>
#include "EtatRobotEnRoute.h"

using namespace std;

class EtatRobotAVide : public EtatRobotEnRoute {

private:
	static EtatRobotAVide * _instance;

protected:
	EtatRobotAVide(string name): EtatRobotEnRoute(name){};

public:
	static EtatRobotAVide * getInstance();

	EtatRobot * avancer();
	EtatRobot * tourner();
	EtatRobot * rencontrerPlot();
};

#endif