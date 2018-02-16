/*
 * GameMapDriver.cpp
 *
 *  Created on: Feb 14, 2018
 *      Author: fvergara
 */

#include <boost/graph/graph_traits.hpp>
#include <boost/graph/undirected_graph.hpp>
#include "../inc/GameMapDriver.h"

GameMapDriver::GameMapDriver(){
	this->gameMap = new GameMap();
}

GameMapDriver::~GameMapDriver(){
	this->gameMap = NULL;
	delete this->gameMap;
};

GameMap * GameMapDriver::createGameMapForNumberOfPlayers(int players){
		switch (players){
		case (TWO):{
			this->gameMap = NULL;
			delete this->gameMap;
			this->gameMap = new GameMap(TWO);
			return this->gameMap;
			break;
		}
		case (THREE) : {
			this->gameMap = NULL;
			delete this->gameMap;
			this->gameMap = new GameMap(THREE);
			return this->gameMap;
			break;
		}
		case (FOUR): {
			this->gameMap = NULL;
			delete this->gameMap;
			this->gameMap = new GameMap(FOUR);
			return this->gameMap;
			break;
		}
		case (FIVE):{
			this->gameMap = NULL;
			delete this->gameMap;
			this->gameMap = new GameMap(FIVE);
			return this->gameMap;
			break;
		}
		default: {
			throw "Invalid number of players";
			break;
		}
		}
	}

GameMap * GameMapDriver::getGeneratedGameMap(){
	return this->gameMap;
}
