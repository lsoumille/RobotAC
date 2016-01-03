/*
  Implementation des méthodes de LecteurCommande.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "LecteurCommande.h"
#include "Position.h"
#include <algorithm>

using namespace std;

static vector<string> allCommands;

bool isNumber(string s){
	for(int i = 0 ; i < s.size() ; ++i){
		if(! isdigit(s[i]))
			return false;
	}
	return true;
}

int LecteurCommande::getInt(){
	string value;
	cin >> value; 
	while(! isNumber(value) || value.size() == 0){
		cout << "La valeur doit etre positive, Retapez une valeur :" << endl << "valeur = ";
		cin.ignore(10000, '\n');
		cin >> value;
		cin.ignore(10000, '\n');
	}
	cout << "end" << endl;
	return stoi(value);
}

string LecteurCommande::getDirection(){
	string value;
	cin >> value;
	transform(value.begin(), value.end(), value.begin(), ::toupper);
	while(value != "N" && value != "S" && value != "E" && value != "O"){
		cout << "Les directions sont N, S, E ou O, Retapez la direction :" << endl << "direction = ";
		cin >> value;
		transform(value.begin(), value.end(), value.begin(), ::toupper);
	}
	return value;
}

bool isCommandInParam(vector<string> list, string nom){
	return (find(list.begin(), list.end(), nom) != list.end());
}

void LecteurCommande::read(){
	for(auto it = Commande::commandesDisponibles().begin(); it != Commande::commandesDisponibles().end(); ++it){
        allCommands.push_back(it->first);
    }
	cout << "Début de la simulation (Ctrl^C pour quitter)" << endl << "> ";
	string nomCommande;
	while(cin >> nomCommande){
		transform(nomCommande.begin(), nomCommande.end(),nomCommande.begin(), ::toupper);
		if(isCommandInParam(allCommands, nomCommande)){
			Commande * cmd = Commande::nouvelleCommande(nomCommande, this);
			cmd->execute();
		} else {
			cerr << "Erreur Commande. Tapez de nouveau la commande :" << endl;
		}
		cout << "> ";
	}
}


