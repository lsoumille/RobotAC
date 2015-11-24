/*
  Implementation des méthodes de CommandeEvaluerPlot.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "CommandeEvaluerPlot.h"

CommandeEvaluerPlot * CommandeEvaluerPlot::_instance = new CommandeEvaluerPlot();

Commande * CommandeEvaluerPlot::constructeurVirtuel(LecteurCommande * lect){
	return new CommandeEvaluerPlot();
}

void CommandeEvaluerPlot::execute() {
	throw "Not yet implemented";
}

