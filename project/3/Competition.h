#pragma once

#include "Hare.h"
#include "Tortoise.h"
#include "Road.h"

class Competition{
public:
	Competition();
	Competition(Hare* rabbit, Tortoise* tor, int length);
	~Competition();
	void start(); 
private:
	Hare* rabbit;
	Tortoise* tor;
	Road* rd;
};