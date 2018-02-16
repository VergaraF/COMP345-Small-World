//============================================================================
// Name        : Small.cpp
// Author      : Fabian Vergara
// Version     : 1.0.0
// Copyright   : This code belongs to Fabian Vergara and is meant to be present to Dr. Nora Houari by the author itself.
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Controller/inc/GameMapDriver.h"

int main() {

	GameMapDriver* gameMapDriver = new GameMapDriver();
	int players;
	std::cout << "How many players are going to play the game? Insert a numeric value from 2 to 5  : ";
	std::cin >> players;

	return 0;
}
