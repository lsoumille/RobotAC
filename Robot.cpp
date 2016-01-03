/*
  Implementation des méthodes de Robot.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "Robot.h"
#include <iostream>

using namespace std;

//constructeur
Robot::Robot(): _position(0,0),
				_direction("N"),
				_objetSaisi(),
				_plot() {
	_etat = EtatRobot::getEtatInitial();
}

/*
Le robot saisit l'objet passé en paramètre
*/
void Robot::saisir(Objet O){
	try {
		_etat = _etat->saisir();
		_objetSaisi = O;
		_ordre = "saisir";
		notifier();
	} catch(EtatRobot::UnavailableFunction) {
		throw EtatRobot::UnavailableFunction();
	}
}

/*
Le robot se déplace à la position passée en paramètre
*/
void Robot::avancer(int x, int y){
	try {
		_etat = _etat->avancer();
		_position.setx(x);
		_position.sety(y);
		_ordre = "avancer";
		notifier(); 
	} catch(EtatRobot::UnavailableFunction) {
		throw EtatRobot::UnavailableFunction();
	}
}

/*
Le robot tourne dans la direction passée en paramètre
si ce n'est pas la même
*/
void Robot::tourner(string direction){
	try {
		if(direction != _direction){
			_etat = _etat->tourner();
			_direction = direction;
			_plot = Plot();	
		}
		_ordre = "tourner";
		notifier();
	} catch(EtatRobot::UnavailableFunction) {
		throw EtatRobot::UnavailableFunction();
	}
}

/*
Le robot pose l'objet qu'il détient
*/
void Robot::poser(){
	try {
		_etat = _etat->poser();
		_objetSaisi = Objet();
		_ordre = "poser";
		notifier();
	} catch(EtatRobot::UnavailableFunction) {
		throw EtatRobot::UnavailableFunction();
	} 
}

/*
Retourne le poids de l'objet porté par le robot
0 si il ne porte rien
*/
int Robot::peser(){
	try {
		_etat = _etat->peser();
		_ordre = "peser";
		notifier();
		return _objetSaisi.getPoids();
	} catch(EtatRobot::UnavailableFunction) {
		throw EtatRobot::UnavailableFunction();
	}
	return 0; 
}

/*
Retourne la hauteur du plot devant le robot
0 si il n'y en a pas
*/
int Robot::evaluerPlot(){
	try {
		_etat = _etat->evaluerPlot();
		_ordre = "evaluerPlot";
		notifier();
		return _plot.getHauteur();
	} catch(EtatRobot::UnavailableFunction) {
		throw EtatRobot::UnavailableFunction();
	}
	return 0;
}

/*
Fige le robot
*/
void Robot::figer(){
	try {
		_etat = _etat->figer();
		_ordre = "figer";
		notifier();
	} catch(EtatRobot::UnavailableFunction) {
		throw EtatRobot::UnavailableFunction();
	}
}

/*
Associe le plot au robot
*/
void Robot::rencontrerPlot(Plot p){
	try {
		_etat = _etat->rencontrerPlot();
		_plot = p;
		_ordre = "rencontrerPlot";
		notifier();
	} catch(EtatRobot::UnavailableFunction) {
		throw EtatRobot::UnavailableFunction();
	}
}

/*
Fonction qui remet le robot en route
*/
void Robot::repartir(){
	try {
		_etat = _etat->repartir();
		_ordre = "repartir";
		notifier();
	} catch(EtatRobot::UnavailableFunction) {
		throw EtatRobot::UnavailableFunction();
	}
}

/*
Ajoute un afficheur qui se mettra à jour 
lors des changements sur le robot
*/
void Robot::attacher(Afficheur * a){
	_afficheurs.push_back(a);
}

/*
Retire un afficheur du vector
*/
void Robot::detacher(Afficheur * a){
	for(auto i = _afficheurs.begin() ; i != _afficheurs.end() 
									 && _afficheurs.size() != 0 ; ++i){
		if(*i == a)
			_afficheurs.erase(i);
	}
}

/*
Indique aux afficheurs de faire une mise a jour
*/
void Robot::notifier(){
	for(auto i = _afficheurs.begin() ; i != _afficheurs.end() ; ++i){
			(*i)->afficher(this);
	}
}

//retourne la position
Position Robot::getPosition(){
	return _position;
}

//retourne la direction
string Robot::getDirection(){
	return _direction;
}

//retourne l'objet
Objet Robot::getObjet(){
	return _objetSaisi;
}

//retourne le plot
Plot Robot::getPlot(){
	return _plot;
}

//retourne l'état
EtatRobot * Robot::getEtat(){
	return _etat;
}

//retourne l'ordre
string Robot::getOrdre(){
	return _ordre;
}