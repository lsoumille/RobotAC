/*
classe : EtatRobotEnCharge.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef _ETAT_ROBOT_EN_CHARGE_H_
#define _ETAT_ROBOT_EN_CHARGE_H_

class EtatRobotEnCharge : public EtatRobotEnRoute {

private:
	static EtatRobotEnCharge * _instance;

protected:
	EtatRobotEnCharge();

public:
	static EtatRobotEnCharge * getInstance();

	EtatRobot * avancer();
	EtatRobot * peser();
	EtatRobot * tourner();
	EtatRobot * rencontrerPlot();
};