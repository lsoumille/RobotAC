/*
classe : RobotARepresenter.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef _ROBOT_A_REPRESENTER_H_
#define _ROBOT_A_REPRESENTER_H_

#include <vector>
#include "Afficheur.h"

using namespace std;

class RobotARepresenter {

	protected:
		vector<Afficheur*> _afficheurs;

	public:
		RobotARepresenter();
		~RobotARepresenter();

		void attacher(Afficheur *);
	    void detacher(Afficheur *);
	    void notifier();
};

#endif