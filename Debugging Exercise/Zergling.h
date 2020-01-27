#pragma once

#include "Entity.h"
#include "Entity.cpp"

class Zergling : public Entity
{
public:
	Zergling();
	~Zergling();

	int attack();
	void takeDamage(int damage);

};

