/*
  Implementation des méthodes de RobotARepresenter.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "RobotARepresenter.h"


RobotARepresenter::RobotARepresenter(){

}

RobotARepresenter::~RobotARepresenter(){
	
}

/*
Ajoute un afficheur qui se mettra à jour 
lors des changements sur le robot
*/
void RobotARepresenter::attacher(Afficheur * a){
	_afficheurs.push_back(a);
}

/*
Retire un afficheur du vector
*/
void RobotARepresenter::detacher(Afficheur * a){
	for(auto i = _afficheurs.begin() ; i != _afficheurs.end() 
									 && _afficheurs.size() != 0 ; ++i){
		if(*i == a)
			_afficheurs.erase(i);
	}
}