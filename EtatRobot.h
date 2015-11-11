/*
classe : EtatRobot.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef _ETAT_ROBOT_H_
#define _ETAT_ROBOT_H_

#include <string>

using namespace std;

class EtatRobot{

private:
	static EtatRobot * _instance;
	static EtatRobot * _etatRobotInitial;
	string _name;

protected:
	EtatRobot(string nom): _name(nom){};

public:
	static EtatRobot * getInstance();
	static EtatRobot * getEtatInitial();

	virtual EtatRobot * saisir();
	virtual EtatRobot * avancer();
	virtual EtatRobot * tourner();
	virtual EtatRobot * poser();
	virtual EtatRobot * peser();
	virtual EtatRobot * rencontrerPlot();
	virtual EtatRobot * figer();
	virtual EtatRobot * repartir();
	virtual EtatRobot * evaluerPlot();
	virtual EtatRobot * afficher();

	//getter
	string getName();

	//exceptions
	class UnavailableFunction{};
};

#endif