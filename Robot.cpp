/*
  Implementation des méthodes de Robot.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "Robot.h"
#include "RobotARepresenter.h"
#include <iostream>

using namespace std;

Robot::Robot(): _position(0,0),
				_direction("N"),
				_objetSaisi(0),
				_plot(0) {
	_etat = EtatRobot::getEtatInitial();
}

//a test
void Robot::saisir(Objet O){
	try {
		_etat = _etat->saisir();
		_objetSaisi = O;
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Fonction indisponible";
	}
}

//a test
void Robot::avancer(int x, int y){
	try {
		_etat = _etat->avancer();
		_position.setx(x);
		_position.sety(y); 
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Fonction indisponible";
	}
}

//a test
void Robot::tourner(string direction){
	try {
		if(direction != _direction){
			_etat = _etat->tourner();
			_direction = direction;
			_plot = Plot(0);
		}
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Fonction indisponible";
	}
}

//a test
void Robot::poser(){
	try {
		_etat = _etat->poser();
		_objetSaisi = Objet(0);
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Fonction indisponible";
	} 
}

//a test
int Robot::peser(){
	try {
		_etat = _etat->peser();
		return _objetSaisi.getPoids();
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Fonction indisponible";
	}
	return 0; 
}

//a test
int Robot::evaluerPlot(){
	try {
		_etat = _etat->evaluerPlot();
		return _plot.getHauteur();
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Fonction indisponible";
	}
	return 0;
}

//a test
void Robot::figer(){
	try{
		_etat = _etat->figer();
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Fonction indisponible";
	}
}

//a test
void Robot::rencontrerPlot(Plot p){
	try{
		_etat = _etat->rencontrerPlot();
		_plot = p;
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Fonction indisponible";
	}
}

//a test
void Robot::repartir(){
	try{
		_etat = _etat->repartir();
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Fonction indisponible";
	}
}

void Robot::notifier(){
	for(auto i = _afficheurs.begin() ; i != _afficheurs.end() ; ++i){
			(*i)->afficher("test");
	}
}