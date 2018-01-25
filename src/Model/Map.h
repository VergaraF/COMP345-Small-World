/*
 * Map.h
 *
 *  Created on: Jan 24, 2018
 *      Author: fvergara
 */

#include <iostream>
#ifndef MODEL_MAP_H_
#define MODEL_MAP_H_

//implementation of a undirected unweighed graph
class Map
{
public :
	//create a V-vertex graph with no edged
	Map::Map(int V);
	//read a graph(map) from map filename.
	Map::Map(std::string fileMapNamePath);
	//number of vertices
	int V();
	//number of edges
	int E();
	//add edge v-w to this graph

};




#endif /* MODEL_MAP_H_ */
