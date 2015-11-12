/*
  Implementation des méthodes de Position.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "Position.h"

void Position::setx(int x){
	_x = x;
}

void Position::sety(int y){
	_y = y;
}

int Position::getx(){
	return _x;
}

int Position::gety(){
	return _y;
}
