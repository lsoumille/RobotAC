/*
classe : EtatRobotFiger.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef _ETAT_ROBOT_FIGER_H_
#define _ETAT_ROBOT_FIGER_H_

#include "EtatRobot.h"
#include <string>

using namespace std;

class EtatRobotFiger : public EtatRobot{

private:
	//stocker précedent
	static EtatRobotFiger * _instance;
	static EtatRobot * _etatRobotPrecedent;

protected:
	EtatRobotFiger(string name):EtatRobot(name){};

public:
	static EtatRobotFiger * getInstance();
	static void setEtatRobotPrecedent(EtatRobot *);

	EtatRobot * repartir();

};

#endif