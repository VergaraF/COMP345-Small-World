/*
 * Region.cpp
 *
 *  Created on: Jan 24, 2018
 *      Author: fvergara
 */

#include <iostream>
#include "Player.h"

class Region {
private:
	Player& ownedBy;
	unsigned int tokens;

public:
	Region(Player& pl, unsigned int tokens = 0){
		this->ownedBy = pl;
		this->tokens = tokens;
	}

	Region(){ // @suppress("Class members should be properly initialized")
		this->tokens = 0;
	}

	Player getOwnerPlayer(){
		return this->ownedBy;
	}

	unsigned int getTokens(){
		return this->tokens;
	}

	void setOwnerPlayer(Player pl){
		this->ownedBy = pl;
	}

	void setTokens(unsigned int token){
		this->tokens = token;
	}

};


