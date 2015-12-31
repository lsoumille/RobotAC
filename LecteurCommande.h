/*
classe : EtatRobot.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef __LecteurCommande_h__
#define __LecteurCommande_h__

#include <iostream>
#include <utility>
#include <vector>
#include "Commande.h"
#include "Position.h"

using namespace std;

class Commande;

class LecteurCommande
{

public:
 	void read();
 	int getInt();
 	string getDirection();
};

#endif
