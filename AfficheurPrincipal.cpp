/*
  Implementation des méthodes de AfficheurPrincipal.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "AfficheurPrincipal.h"
#include <iostream>

/*
Affiche toutes les informations du robot passé en paramètre
dans la console
*/
void AfficheurPrincipal::afficher(Robot * r){
	cout << ">> Statut du Robot <<" << endl
		 << "Ordre donné : " << r->getOrdre() << endl
		 << "Etat : " << r->getEtat()->getName() << endl
		 << "Position : x = " << r->getPosition().getx()
		 << " y = " << r->getPosition().gety() << endl
		 << "Direction : " << r->getDirection() << endl
		 << "Objet (-1 equivalent a vide) : " << r->getObjet().getPoids() << endl
		 << "Plot (-1 n'est pas face à un plot) : " << r->getPlot().getHauteur() << endl;
	if(r->getOrdre() == "figer")
		cout << "Le robot est figé" << endl;
	else 
		cout << "Le robot est en attente d'ordre" << endl;
	cout << "> ------------------------------ <" << endl;
}