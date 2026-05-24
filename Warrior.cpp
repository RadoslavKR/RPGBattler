#include <cstdlib>
#include <stdexcept>

#include "Warrior.h"
#include "HeroesStats.h"

Warrior::Warrior(const std::string& name):
	Hero(name, warriorHealth, warriorLowerDamage, warriorUpperDamage)
{}

unsigned int Warrior::specialAbility(int tempDamage = 0)
{
	return (std::rand() % warriorUpperDmgRed) + warriorLowerDmgRed;
}

void Warrior::takeDamage(unsigned int damage)
{
	if (currentHealth == 0) {
		throw std::logic_error("Can not deal damage to a death hero!");
	}
	currentHealth -= damage - specialAbility();
	if (currentHealth < 0) currentHealth = 0;
}
