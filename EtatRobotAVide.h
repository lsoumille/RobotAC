/*
classe : EtatRobotAVide.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef _ETAT_ROBOT_A_VIDE_H_
#define _ETAT_ROBOT_A_VIDE_H_

class EtatRobotAVide : public EtatRobotEnRoute {

private:
	static EtatRobotAVide * _instance;

protected:
	EtatRobotAVide();

public:
	static EtatRobotAVide * getInstance();

	EtatRobot * avancer();
	EtatRobot * tourner();
};