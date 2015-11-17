CC = g++

option = -g -W -Wall -std=c++11 

OBJ_FICHIER = main.o Robot.o EtatRobot.o EtatRobotFiger.o EtatRobotEnRoute.o Objet.o Position.o Plot.o Afficheur.o AfficheurPrincipal.o EtatRobotEnCharge.o EtatRobotChargeFacePlot.o EtatRobotAVideFacePlot.o EtatRobotAVide.o LecteurCommande.o Commande.o CommandeRobot.o CommandeRepartir.o CommandeFiger.o CommandeSaisir.o CommandePeser.o CommandeRencontrerPlot.o CommandePoser.o CommandeEvaluerPlot.o CommandeTourner.o CommandeAvancer.o

EXE = executionRobot

all: $(EXE)
	
#Exécutable
executionRobot: $(OBJ_FICHIER)
	$(CC) $(option) -o $(EXE) $(OBJ_FICHIER)
#Main
main_Robot.o: main.cpp 
	$(CC) $(option) -c main.cpp -o main.o

#Classe EtatRobot
EtatRobot.o: EtatRobot.h EtatRobot.cpp
	$(CC) $(option) -c EtatRobot.cpp -o EtatRobot.o

#Classe EtatRobotFiger
EtatRobotFiger.o: EtatRobotFiger.h EtatRobotFiger.cpp
	$(CC) $(option) -c EtatRobotFiger.cpp -o EtatRobotFiger.o

#Classe EtatRobotEnRoute
EtatRobotEnRoute.o: EtatRobotEnRoute.h EtatRobotEnRoute.cpp
	$(CC) $(option) -c EtatRobotEnRoute.cpp -o EtatRobotEnRoute.o

#Classe EtatRobotAVide
EtatRobotAVide.o: EtatRobotAVide.h EtatRobotAVide.cpp
	$(CC) $(option) -c EtatRobotAVide.cpp -o EtatRobotAVide.o

#Classe EtatRobotAVideFacePlot
EtatRobotAVideFacePlot.o: EtatRobotAVideFacePlot.h EtatRobotAVideFacePlot.cpp
	$(CC) $(option) -c EtatRobotAVideFacePlot.cpp -o EtatRobotAVideFacePlot.o

#Classe EtatRobotEnCharge
EtatRobotEnCharge.o: EtatRobotEnCharge.h EtatRobotEnCharge.cpp
	$(CC) $(option) -c EtatRobotEnCharge.cpp -o EtatRobotEnCharge.o

#Classe EtatRobotChargeFacePlot
EtatRobotChargeFacePlot.o: EtatRobotChargeFacePlot.h EtatRobotChargeFacePlot.cpp
	$(CC) $(option) -c EtatRobotChargeFacePlot.cpp -o EtatRobotChargeFacePlot.o

#Classe Robot
Robot.o: Robot.h Robot.cpp
	$(CC) $(option) -c Robot.cpp -o Robot.o

#Classe Objet
Objet.o: Objet.h Objet.cpp
	$(CC) $(option) -c Objet.cpp -o Objet.o
	
#Classe Position
Position.o: Position.h Position.cpp
	$(CC) $(option) -c Position.cpp -o Position.o

#Classe Plot
Plot.o: Plot.h Plot.cpp
	$(CC) $(option) -c Plot.cpp -o Plot.o

#Classe Afficheur
Afficheur.o : Afficheur.h Afficheur.cpp
	$(CC) $(option) -c Afficheur.cpp -o Afficheur.o

#Classe AfficheurPrincipal
AfficheurPrincipal.o : AfficheurPrincipal.h AfficheurPrincipal.cpp
	$(CC) $(option) -c AfficheurPrincipal.cpp -o AfficheurPrincipal.o

#Classe LecteurCommande
LecteurCommande.o : LecteurCommande.h LecteurCommande.cpp
	$(CC) $(option) -c LecteurCommande.cpp -o LecteurCommande.o

#Classe Commande
Commande.o : Commande.h Commande.cpp
	$(CC) $(option) -c Commande.cpp -o Commande.o

#Classe CommandeRobot
CommandeRobot.o : CommandeRobot.h CommandeRobot.cpp
	$(CC) $(option) -c CommandeRobot.cpp -o CommandeRobot.o

#Classe CommandeRepartir
CommandeRepartir.o : CommandeRepartir.h CommandeRepartir.cpp
	$(CC) $(option) -c CommandeRepartir.cpp -o CommandeRepartir.o

#Classe CommandeFiger
CommandeFiger.o : CommandeFiger.h CommandeFiger.cpp
	$(CC) $(option) -c CommandeFiger.cpp -o CommandeFiger.o

#Classe CommandeSaisir
CommandeSaisir.o : CommandeSaisir.h CommandeSaisir.cpp
	$(CC) $(option) -c CommandeSaisir.cpp -o CommandeSaisir.o

#Classe CommandePeser
CommandePeser.o : CommandePeser.h CommandePeser.cpp
	$(CC) $(option) -c CommandePeser.cpp -o CommandePeser.o

#Classe CommandeRencontrerPlot
RencontrerPlot.o : RencontrerPlot.h RencontrerPlot.cpp
	$(CC) $(option) -c RencontrerPlot.cpp -o RencontrerPlot.o

#Classe CommandePoser
CommandePoser.o : CommandePoser.h CommandePoser.cpp
	$(CC) $(option) -c CommandePoser.cpp -o CommandePoser.o

#Classe CommandeEvaluerPlot
CommandeEvaluerPlot.o : CommandeEvaluerPlot.h CommandeEvaluerPlot.cpp
	$(CC) $(option) -c CommandeEvaluerPlot.cpp -o CommandeEvaluerPlot.o

#Classe CommandeTourner
CommandeTourner.o : CommandeTourner.h CommandeTourner.cpp
	$(CC) $(option) -c CommandeTourner.cpp -o CommandeTourner.o

#Classe CommandeAvancer
CommandeAvancer.o : CommandeAvancer.h CommandeAvancer.cpp
	$(CC) $(option) -c CommandeAvancer.cpp -o CommandeAvancer.o
clean: 
	rm -vf *.o executionRobot
