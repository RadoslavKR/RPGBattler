#pragma once

#include<string>

#include "User.h"

class Hero
{
protected:
	std::string name;
	unsigned int health;
	unsigned int currentHealth;
	unsigned int lowerDamage;
	unsigned int upperDamage;
	unsigned int level;
public:
	Hero(const std::string& name, unsigned int health, unsigned int lowerDamage, unsigned int upperDamage);

	virtual unsigned int specialAbility(int tempDmg = -1) = 0;

	virtual void attack(Hero& affectedHero);

	virtual void takeDamage(unsigned int damage);
};

