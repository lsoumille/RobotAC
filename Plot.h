/*
classe : Plot.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef _PLOT_H_
#define _PLOT_H_

class Plot {
	
	private:
		int _hauteur;

	public:
		Plot(int i = -1): _hauteur(i){}; 

		int getHauteur();
};

#endif
