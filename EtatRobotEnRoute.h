/*
classe : EtatRobotFiger.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef _ETAT_ROBOT_EN_ROUTE_H_
#define _ETAT_ROBOT_EN_ROUTE_H_

#include "EtatRobot.h"
#include <string>

using namespace std;

class EtatRobotEnRoute : public EtatRobot{

private:
	static EtatRobotEnRoute * _instance;

protected:
	EtatRobotEnRoute(string name): EtatRobot(name){};

public:
	static EtatRobotEnRoute * getInstance();

	EtatRobot * figer();
};

#endif