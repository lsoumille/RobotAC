/*
classe : Position.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef _POSITION_H_
#define _POSITION_H_

class Position {
	
private:
	int _x;
	int _y;

public:
	Position(int x, int y): _x(x), _y(y){};

	//setters
	void setx(int x);
	void sety(int y);

	//getters
	int getx();
	int gety(); 
};

#endif
