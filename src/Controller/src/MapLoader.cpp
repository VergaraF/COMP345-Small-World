/*
 * MapLoader.cpp
 *
 *  Created on: Feb 16, 2018
 *      Author: fvergara
 */

#include "../inc/MapLoader.h"


std::vector<RegionToAdd*> allRegions;

GameMap readF(){
	std::ifstream input;
		input.open("MapFile.txt");

		if(input.fail()) {
				std::cout << " File does not exist or it has wrong format" << std::endl;
				std::cout << "Exit program" << std::endl;
				//return NULL;
		}

		GameMap m;
		m = readFile(input);
		return m;
}

GameMap readFile(std::ifstream fileContents){

		int regionNum(0);
		std::string regionName;
		std::vector<int> neighborRegions;

		//read line by line and add to a vector of string tokens
		std::string token;
		std::vector<std::string> tokens(20);

		std::string line;
		std::stringstream linestream(line);

		int tempInt(0);


		while(!fileContents.eof()) {
				while(getline(fileContents,line)) {
					getline(linestream,token);

					while (!linestream.eof()) {
						linestream >> token;
						tokens.push_back(token);
					}
					std::stringstream temp(tokens[0]);
					temp >> regionNum;
					regionName = tokens[1];

					for (unsigned i=2; i<tokens.size(); i++) {
						temp.str(tokens[i]);
						temp >> tempInt;
						neighborRegions.push_back(tempInt);
					}

					//create a new region for this line
					Region region();
					RegionToAdd regionToAdd;
					regionToAdd.index = regionNum;
					regionToAdd.region = region;


					//and add it to the list of regions
					allRegions.push_back(&regionToAdd);
				}
			}

		//create empty map
		Map gameMap;

		for (unsigned j=0; j<allRegions.size(); j++) {
			for (unsigned k=0; k<allRegions[j]->mAdjacentIndexes.size(); k++) {
				gameMap.addEdge(allRegions[j], allRegions[allRegions[j]->mAdjacentIndexes.at(k)]);
			}
		}

		return gameMap;
}
