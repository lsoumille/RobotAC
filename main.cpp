#include "Robot.h"
#include "EtatRobot.h"
#include "EtatRobotFiger.h"
#include "EtatRobotEnRoute.h"
#include "AfficheurPrincipal.h"
#include "LecteurCommande.h"
#include "CommandeAvancer.h"
#include "CommandeEvaluerPlot.h"
#include "CommandeFiger.h"
#include "CommandePeser.h"
#include "CommandePoser.h"
#include "CommandeRencontrerPlot.h"
#include "CommandeRepartir.h"
#include "CommandeSaisir.h"
#include "CommandeTourner.h"

#include <iostream>

using namespace std;

int main(){

	//création du robot
	Robot rob;
	Plot p(10);
	Objet o(5);

	//Mise en place de l'afficheur
	Afficheur* affi1 = new AfficheurPrincipal();
	rob.attacher(affi1);
	/*
	//Test AVide sans changement d'Etat
	rob.avancer(1,1);
	rob.tourner("S");
	//Test AVide fonction impossible
	rob.peser();
	//Test AVide -> aVideFacePlot
	rob.rencontrerPlot(p);
	//Test AVideFacePlot
	rob.evaluerPlot();
	//Test AVideFacePlot -> AVide
	rob.tourner("N");
	rob.rencontrerPlot(p);
	//Test AVideFacePLot <-> EnChargeFacePlot
	rob.saisir(o);
	rob.poser();
	rob.saisir(o);
	//test Figer 1
	rob.figer();
	rob.repartir();
	//Test EnChargeFacePlot
	rob.evaluerPlot();
	rob.peser();
	//Test EnChargeFacePlot <-> EnCharge
	rob.tourner("O");
	rob.rencontrerPlot(p);
	rob.tourner("E");
	//Test EnCharge
	rob.avancer(9,6);
	rob.tourner("S");
	rob.peser();
	//Test figer 2
	rob.figer();
	rob.avancer(10,12);
	rob.repartir();

	rob.detacher(affi1);
	//Ne doit pas s'afficher
	rob.tourner("S");
	*/
	CommandeAvancer cmdAvancer(&rob);
	CommandeEvaluerPlot cmdEvaPlot(&rob);
	CommandeFiger cmdFiger(&rob);
	CommandePeser cmdPeser(&rob);
	CommandePoser cmdPoser(&rob);
	CommandeRencontrerPlot cmdRP(&rob);
	CommandeRepartir cmdRepartir(&rob);
	CommandeSaisir cmdSaisir(&rob);
	CommandeTourner cmdTourner(&rob);

	//CODE POUR LECTEUR 
	LecteurCommande * Hannibal= new LecteurCommande();
	Hannibal->read();
	

	return 0;
}