/*
 * Region.cpp
 *
 *  Created on: Jan 24, 2018
 *      Author: fvergara
 */

#include <iostream>
#include "../inc/Player.h"
#include "../inc/Region.h"

Region::Region(){ // @suppress("Class members should be properly initialized")
	this->tokens = 0;
}

Region::Region(Player& pl, unsigned int tokens = 0){
	this->ownedBy = pl;
	this->tokens = tokens;
}

Player Region::getOwnerPlayer(){
		return this->ownedBy;
}

unsigned int Region::getTokens(){
	return this->tokens;
}

void Region::setOwnerPlayer(Player& pl){
	this->ownedBy = pl;
}

void Region::setTokens(unsigned int token){
		this->tokens = token;
}

