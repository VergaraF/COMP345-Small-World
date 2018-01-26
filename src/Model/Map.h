/*
 * Map.h
 *
 *  Created on: Jan 24, 2018
 *      Author: fvergara
 */

#include <iostream>
#include <region.h>
#include <player.h>

#ifndef MODEL_MAP_H_
#define MODEL_MAP_H_

struct RegionListNode {
	public:
	Region data;
	RegionListNode *next;

};
struct RegionList {
	public:
	RegionListNode *head;
};

//implementation of an undirected unweighed graph
//Vertex = region
//Edge
//Graph - Map
class Map
{
public :
	int V;
	RegionList *arr;

	//create a V-vertex graph with no edges
	Map::Map(int V); //vertex = regions
	//read a graph(map) from map filename.
	Map::Map(std::string fileMapNamePath);
	//number of vertices
	int V();
	//number of edges
	int E();
	//add edge v-w to this graph
	void addEdge(Region &v1, Region &v2);
	//add vertex (region)
	Region addRegion(Region &adjacentTo);
};

#endif /* MODEL_MAP_H_ */
