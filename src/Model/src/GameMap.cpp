/*
 * GameMap.cpp
 *
 *  Created on: Feb 11, 2018
 *      Author: fvergara
 */

#include <iostream>
#include "Region.h"
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/undirected_graph.hpp>

typedef boost::undirected_graph<Region> Graph;

enum Players{ TWO, THREE, FOUR, FIVE};
enum Regions{ FOR_TWO_PLAYERS = 23,
			  FOR_THREE_PLAYERS = 30,
			  FOR_FOUR_PLAYERS = 25,
			  FOR_FIVE_PLAYERS = 26};

class GameMap{
private:
	Graph gameMap;

public:
	GameMap() {}

	GameMap(Players numberOfPlayers){

		//There will be always at least 23 regions regardless number of players
		switch (numberOfPlayers){
		case (TWO):{

			Region gameRegions[FOR_TWO_PLAYERS];
			Graph::vertex_descriptor vertexDescriptors[FOR_TWO_PLAYERS];
			for (int i = 0; i < FOR_TWO_PLAYERS; ++i){
				gameRegions[i] = new Region();
				vertexDescriptors[i] = addRegion(gameRegions[i]);
			}

			createMapForTwoPlayers(gameRegions, vertexDescriptors);
			break;
		}
		case(THREE): {

			Region gameRegions[FOR_THREE_PLAYERS];
			Graph::vertex_descriptor vertexDescriptors[FOR_THREE_PLAYERS];
			for (int i = 0; i < FOR_THREE_PLAYERS; ++i){
				gameRegions[i] = new Region();
				vertexDescriptors[i] = addRegion(gameRegions[i]);
			}

			createMapForThreePlayers(gameRegions, vertexDescriptors);
			break;
		}

		case(FOUR): { break;}
		case(FIVE):{break;}
		default: throw "Invalid number of players";

		}
	}

	void createMapForTwoPlayers(Region* regions, Graph::vertex_descriptor* vertexDescriptors){

		//we can optimize this hard coded values by using a for loop and liked i to i++,
		//except for three places where that rule does not apply.

		//First row
		makeRegionConnection(vertexDescriptors[0], vertexDescriptors[1]);
		makeRegionConnection(vertexDescriptors[0], vertexDescriptors[5]);

		makeRegionConnection(vertexDescriptors[1], vertexDescriptors[2]);
		makeRegionConnection(vertexDescriptors[1], vertexDescriptors[6]);

		makeRegionConnection(vertexDescriptors[2], vertexDescriptors[3]);
		makeRegionConnection(vertexDescriptors[2], vertexDescriptors[6]);
		makeRegionConnection(vertexDescriptors[2], vertexDescriptors[7]);
		makeRegionConnection(vertexDescriptors[2], vertexDescriptors[8]);

		makeRegionConnection(vertexDescriptors[3], vertexDescriptors[4]);
		makeRegionConnection(vertexDescriptors[3], vertexDescriptors[8]);
		makeRegionConnection(vertexDescriptors[3], vertexDescriptors[9]);

		makeRegionConnection(vertexDescriptors[4], vertexDescriptors[9]);
		makeRegionConnection(vertexDescriptors[4], vertexDescriptors[10]);

		//Second row
		makeRegionConnection(vertexDescriptors[5], vertexDescriptors[6]);
		makeRegionConnection(vertexDescriptors[5], vertexDescriptors[11]);

		makeRegionConnection(vertexDescriptors[6], vertexDescriptors[7]);
		makeRegionConnection(vertexDescriptors[6], vertexDescriptors[11]);
		makeRegionConnection(vertexDescriptors[6], vertexDescriptors[12]);

		makeRegionConnection(vertexDescriptors[7], vertexDescriptors[8]);
		makeRegionConnection(vertexDescriptors[7], vertexDescriptors[12]);
		makeRegionConnection(vertexDescriptors[7], vertexDescriptors[13]);

		makeRegionConnection(vertexDescriptors[8], vertexDescriptors[9]);
		makeRegionConnection(vertexDescriptors[8], vertexDescriptors[13]);
		makeRegionConnection(vertexDescriptors[8], vertexDescriptors[14]);

		makeRegionConnection(vertexDescriptors[9], vertexDescriptors[10]);
		makeRegionConnection(vertexDescriptors[9], vertexDescriptors[14]);

		makeRegionConnection(vertexDescriptors[10], vertexDescriptors[14]);
		makeRegionConnection(vertexDescriptors[10], vertexDescriptors[15]);

		//third row
		makeRegionConnection(vertexDescriptors[11], vertexDescriptors[12]);
		makeRegionConnection(vertexDescriptors[11], vertexDescriptors[16]);
		makeRegionConnection(vertexDescriptors[11], vertexDescriptors[17]);

		makeRegionConnection(vertexDescriptors[12], vertexDescriptors[13]);
		makeRegionConnection(vertexDescriptors[12], vertexDescriptors[17]);
		makeRegionConnection(vertexDescriptors[12], vertexDescriptors[17]);
		makeRegionConnection(vertexDescriptors[12], vertexDescriptors[18]);

		makeRegionConnection(vertexDescriptors[13], vertexDescriptors[14]);
		makeRegionConnection(vertexDescriptors[13], vertexDescriptors[18]);
		makeRegionConnection(vertexDescriptors[13], vertexDescriptors[19]);
		makeRegionConnection(vertexDescriptors[13], vertexDescriptors[20]);

		makeRegionConnection(vertexDescriptors[14], vertexDescriptors[15]);
		makeRegionConnection(vertexDescriptors[14], vertexDescriptors[20]);
		makeRegionConnection(vertexDescriptors[14], vertexDescriptors[21]);

		makeRegionConnection(vertexDescriptors[15], vertexDescriptors[21]);
		makeRegionConnection(vertexDescriptors[15], vertexDescriptors[22]);

		//fourth row
		makeRegionConnection(vertexDescriptors[16], vertexDescriptors[17]);

		makeRegionConnection(vertexDescriptors[17], vertexDescriptors[18]);

		makeRegionConnection(vertexDescriptors[18], vertexDescriptors[19]);

		makeRegionConnection(vertexDescriptors[19], vertexDescriptors[20]);

		makeRegionConnection(vertexDescriptors[20], vertexDescriptors[21]);
		makeRegionConnection(vertexDescriptors[20], vertexDescriptors[22]);

		makeRegionConnection(vertexDescriptors[21], vertexDescriptors[22]);


	}

	void createMapForThreePlayers(Region* regions, Graph::vertex_descriptor* vertexDescriptors){
		//As for MapForTwoPlayers function, this can be optimized using a for loop.
		//I'll apply that approach after I get my "bruteforce" solution

		makeRegionConnection(vertexDescriptors[0], vertexDescriptors[1]);
		makeRegionConnection(vertexDescriptors[0], vertexDescriptors[7]);
		makeRegionConnection(vertexDescriptors[0], vertexDescriptors[12]);

		makeRegionConnection(vertexDescriptors[1], vertexDescriptors[2]);
		makeRegionConnection(vertexDescriptors[1], vertexDescriptors[7]);
		makeRegionConnection(vertexDescriptors[1], vertexDescriptors[8]);

		makeRegionConnection(vertexDescriptors[2], vertexDescriptors[3]);
		makeRegionConnection(vertexDescriptors[2], vertexDescriptors[8]);
		makeRegionConnection(vertexDescriptors[2], vertexDescriptors[9]);

		makeRegionConnection(vertexDescriptors[3], vertexDescriptors[4]);
		makeRegionConnection(vertexDescriptors[3], vertexDescriptors[9]);
		makeRegionConnection(vertexDescriptors[3], vertexDescriptors[10]);

		makeRegionConnection(vertexDescriptors[4], vertexDescriptors[5]);
		makeRegionConnection(vertexDescriptors[4], vertexDescriptors[10]);
		makeRegionConnection(vertexDescriptors[4], vertexDescriptors[11]);

		makeRegionConnection(vertexDescriptors[5], vertexDescriptors[6]);
		makeRegionConnection(vertexDescriptors[5], vertexDescriptors[11]);

		makeRegionConnection(vertexDescriptors[6], vertexDescriptors[11]);
		makeRegionConnection(vertexDescriptors[6], vertexDescriptors[16]);
		makeRegionConnection(vertexDescriptors[6], vertexDescriptors[17]);

		makeRegionConnection(vertexDescriptors[7], vertexDescriptors[8]);
		makeRegionConnection(vertexDescriptors[7], vertexDescriptors[12]);

		makeRegionConnection(vertexDescriptors[8], vertexDescriptors[9]);
		makeRegionConnection(vertexDescriptors[8], vertexDescriptors[12]);
		makeRegionConnection(vertexDescriptors[8], vertexDescriptors[13]);

		makeRegionConnection(vertexDescriptors[9], vertexDescriptors[10]);
		makeRegionConnection(vertexDescriptors[9], vertexDescriptors[13]);
		makeRegionConnection(vertexDescriptors[9], vertexDescriptors[14]);

		makeRegionConnection(vertexDescriptors[10], vertexDescriptors[11]);
		makeRegionConnection(vertexDescriptors[10], vertexDescriptors[14]);
		makeRegionConnection(vertexDescriptors[10], vertexDescriptors[15]);

		makeRegionConnection(vertexDescriptors[11], vertexDescriptors[15]);
		makeRegionConnection(vertexDescriptors[11], vertexDescriptors[16]);

		makeRegionConnection(vertexDescriptors[12], vertexDescriptors[13]);
		makeRegionConnection(vertexDescriptors[12], vertexDescriptors[18]);

		makeRegionConnection(vertexDescriptors[13], vertexDescriptors[14]);
		makeRegionConnection(vertexDescriptors[13], vertexDescriptors[18]);
		makeRegionConnection(vertexDescriptors[13], vertexDescriptors[19]);

		makeRegionConnection(vertexDescriptors[14], vertexDescriptors[15]);
		makeRegionConnection(vertexDescriptors[14], vertexDescriptors[19]);
		makeRegionConnection(vertexDescriptors[14], vertexDescriptors[20]);
		makeRegionConnection(vertexDescriptors[14], vertexDescriptors[21]);

		makeRegionConnection(vertexDescriptors[15], vertexDescriptors[16]);
		makeRegionConnection(vertexDescriptors[15], vertexDescriptors[21]);
		makeRegionConnection(vertexDescriptors[15], vertexDescriptors[22]);

		makeRegionConnection(vertexDescriptors[16], vertexDescriptors[17]);
		makeRegionConnection(vertexDescriptors[16], vertexDescriptors[22]);
		makeRegionConnection(vertexDescriptors[16], vertexDescriptors[23]);

		makeRegionConnection(vertexDescriptors[17], vertexDescriptors[23]);
		makeRegionConnection(vertexDescriptors[17], vertexDescriptors[29]);

		makeRegionConnection(vertexDescriptors[18], vertexDescriptors[19]);
		makeRegionConnection(vertexDescriptors[18], vertexDescriptors[24]);
		makeRegionConnection(vertexDescriptors[18], vertexDescriptors[25]);

		makeRegionConnection(vertexDescriptors[19], vertexDescriptors[20]);
		makeRegionConnection(vertexDescriptors[19], vertexDescriptors[25]);
		makeRegionConnection(vertexDescriptors[19], vertexDescriptors[26]);

		makeRegionConnection(vertexDescriptors[20], vertexDescriptors[21]);
		makeRegionConnection(vertexDescriptors[20], vertexDescriptors[26]);
		makeRegionConnection(vertexDescriptors[20], vertexDescriptors[27]);

		makeRegionConnection(vertexDescriptors[21], vertexDescriptors[22]);
		makeRegionConnection(vertexDescriptors[21], vertexDescriptors[27]);
		makeRegionConnection(vertexDescriptors[21], vertexDescriptors[28]);

		makeRegionConnection(vertexDescriptors[22], vertexDescriptors[23]);
		makeRegionConnection(vertexDescriptors[22], vertexDescriptors[28]);

		makeRegionConnection(vertexDescriptors[23], vertexDescriptors[28]);
		makeRegionConnection(vertexDescriptors[23], vertexDescriptors[29]);

		makeRegionConnection(vertexDescriptors[24], vertexDescriptors[25]);

		makeRegionConnection(vertexDescriptors[25], vertexDescriptors[26]);

		makeRegionConnection(vertexDescriptors[26], vertexDescriptors[27]);

		makeRegionConnection(vertexDescriptors[27], vertexDescriptors[28]);

		makeRegionConnection(vertexDescriptors[28], vertexDescriptors[29]);
	}

	void makeRegionConnection(Graph::vertex_descriptor& region1, Graph::vertex_descriptor& region2){
		this->gameMap.add_edge(region1, region2);
	}

	Graph::vertex_descriptor addRegion(Region& reg){
		return this->gameMap.add_vertex(reg);
	}

	Graph getGameMap(){
		return this->gameMap;
	}

};




