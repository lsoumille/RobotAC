/*
  Implementation des méthodes de RobotARepresenter.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "RobotARepresenter.h"


RobotARepresenter::RobotARepresenter(){

}

RobotARepresenter::~RobotARepresenter(){
	//a faire
}

void RobotARepresenter::attacher(Afficheur * a){
	_afficheurs.push_back(a);
}

void RobotARepresenter::detacher(Afficheur * a){
	for(auto i = _afficheurs.begin() ; i != _afficheurs.end() ; ++i){
		if(*i == a)
			_afficheurs.erase(i);
	}
}