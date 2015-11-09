/*
classe : Robot.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef _ROBOT_H_
#define _ROBOT_H_

#include "EtatRobot.h"

class Robot{
private:
	EtatRobot * etat;
	
public:
	Robot(EtatRobot et):etat(&et){};
	void saisir();
};

#endif