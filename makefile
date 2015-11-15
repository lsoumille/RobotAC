CC = g++

option = -g -W -Wall -std=c++11 

OBJ_FICHIER = index.o Robot.o EtatRobot.o EtatRobotFiger.o EtatRobotEnRoute.o Objet.o Position.o Plot.o Afficheur.o AfficheurPrincipal.o EtatRobotEnCharge.o EtatRobotChargeFacePlot.o EtatRobotAVideFacePlot.o EtatRobotAVide.o

EXE = executionRobot

all: $(EXE)
	
#Exécutable
executionRobot: $(OBJ_FICHIER)
	$(CC) $(option) -o $(EXE) $(OBJ_FICHIER)
#Main
main_Robot.o: index.cpp 
	$(CC) $(option) -c index.cpp -o index.o

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
clean: 
	rm -vf *.o executionRobot
