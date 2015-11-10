/*
classe : EtatRobot.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef _ETAT_ROBOT_H_
#define _ETAT_ROBOT_H_

#include <map>
#include <string>
#include <iostream>

using namespace std;

class EtatRobot{

private:
	static map<string, EtatRobot *> _mapEtats;
	static EtatRobot * _instance;

protected:
	EtatRobot(string name){
		EtatRobot::_mapEtats[name] = this;
	}

public:
	static EtatRobot * getInstance();

	static map<string,EtatRobot *> getMap() {
		return _mapEtats;
	}

	virtual EtatRobot * saisir();
	virtual EtatRobot * avancer();
	virtual EtatRobot * tourner();
	virtual EtatRobot * poser();
	virtual EtatRobot * peser();
	virtual EtatRobot * rencontrerObstacle();
	virtual EtatRobot * arreter();
	virtual EtatRobot * repartir();
	virtual EtatRobot * evaluerObstacle();
	virtual EtatRobot * afficher();

	//exceptions
	class UnavailableFunction{};
};

#endif