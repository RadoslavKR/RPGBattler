#pragma once

#include "Hero.h"

class Archer : Hero
{
private:
	Archer(const std::string name);

	void attack(Hero& affectedHero) override;
	unsigned int specialAbility(int tempDamage = 0) override;
};

