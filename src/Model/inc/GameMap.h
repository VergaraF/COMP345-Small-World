/*
 * GameMap.h
 *
 *  Created on: Feb 7, 2018
 *      Author: fvergara
 */

#ifndef MODEL_GAMEMAP_H_
#define MODEL_GAMEMAP_H_

#include <iostream>
#include "Region.h"
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/undirected_graph.hpp>

typedef boost::undirected_graph<Region> Graph;

class GameMap{

private:
	Graph gameMap;

public:
	GameMap(Players);
	GameMap(int, Region*, Graph::vertex_descriptor*);
	~GameMap();
	Graph::vertex_descriptor addRegion(Region&);
	Graph getGameMap();
	void makeRegionConnection(Graph::vertex_descriptor&, Graph::vertex_descriptor&);
	void createMapForTwoPlayers(Region*, Graph::vertex_descriptor*);

};



#endif /* MODEL_GAMEMAP_H_ */
