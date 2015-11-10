/*
classe : EtatRobotChargeFacePlot.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef _ETAT_ROBOT_A_VIDE_FACE_PLOT_H_
#define _ETAT_ROBOT_A_VIDE_FACE_PLOT_H_

#include "EtatRobotChargeFacePlot.h"

class EtatRobotChargeFacePlot : public EtatRobotEnRoute {

private:
	static EtatRobotChargeFacePlot * _instance;

protected:
	EtatRobotChargeFacePlot();

public:
	static EtatRobotChargeFacePlot * getInstance();

	EtatRobot * tourner();
	EtatRobot * poser();
	EtatRobot * peser();
	EtatRobot * evaluerPlot();

};

#endif