/*
  Implementation des méthodes de LecteurCommande.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "LecteurCommande.h"
#include "Position.h"
 using namespace std;


 LecteurCommande::LecteurCommande(){
 	_pos= Position();
 }


void LecteurCommande::read(){

	string _commande;
	cin >> _commande;
	if(_commande=="AVANCER"){
		int _x,_y;
		cin>>_x;
		cin>>_y;
		_pos.setx(_x);
		_pos.sety(_y);
	}
	if(_commande=="SAISIR"){
		cin>>_paramInt;

	}
	if(_commande=="RENCONTRER"){
		cin>>_paramInt;
	}
}


