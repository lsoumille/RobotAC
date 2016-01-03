/*
  Implementation des méthodes de CommandeEvaluerPlot.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandeEvaluerPlot.h"

Commande * CommandeEvaluerPlot::constructeurVirtuel(LecteurCommande * lect){
	return new CommandeEvaluerPlot(_Robot);
}

void CommandeEvaluerPlot::execute() {
	try {
		_Robot->evaluerPlot();
	} catch(EtatRobot::UnavailableFunction) {
		cerr << "Commande interdite" << endl;
	}
}

