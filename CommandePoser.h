/*
classe : CommandePoser.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef __CommandePoser_h__
#define __CommandePoser_h__

#include "CommandeRobot.h"

// class CommandeRobot;
class CommandePoser;

class CommandePoser: public CommandeRobot
{
	public:

		void execute();
};

#endif
