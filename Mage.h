#pragma once

#include "Hero.h"

class Mage : public Hero
{
public:
	Mage(const std::string& name);

	void attack(Hero& affectedHero) override;
	unsigned int specialAbility(int tempDamage = 0) override;
};

