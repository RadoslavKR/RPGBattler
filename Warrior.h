#pragma once

#include "Hero.h"

class Warrior : public Hero
{
public:
	Warrior(const std::string& name);

	unsigned int specialAbility(int tempDamage = 0) override;
	void takeDamage(unsigned int damage) override;
};
		
