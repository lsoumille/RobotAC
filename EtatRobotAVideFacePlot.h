/*
classe : EtatRobotAVideFacePlot.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef _ETAT_ROBOT_A_VIDE_FACE_PLOT_H_
#define _ETAT_ROBOT_A_VIDE_FACE_PLOT_H_

#include "EtatRobotEnRoute.h"

using namespace std;

class EtatRobotAVideFacePlot : public EtatRobotEnRoute {

private:
	static EtatRobotAVideFacePlot * _instance;

protected:
	EtatRobotAVideFacePlot();

public:
	static EtatRobotAVideFacePlot * getInstance();

	EtatRobot * saisir();
	EtatRobot * tourner();
	EtatRobot * evaluerPlot();

};

#endif