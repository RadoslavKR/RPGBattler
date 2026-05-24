#include<stdexcept>
#include<cstdlib>

#include "Hero.h"

Hero::Hero(const std::string& name, unsigned int health, unsigned int lowerDamage, unsigned int upperDamage):
	name(name), health(health), currentHealth(health), level(1)
{
	if (upperDamage < lowerDamage) {
		throw std::logic_error("The upper bound of damage should be higher than the lower!");
	}
	this->upperDamage = upperDamage;
	this->lowerDamage = lowerDamage;
}

void Hero::attack(Hero& affectedHero)
{
	unsigned int damage = (std::rand() % (upperDamage - lowerDamage + 1)) + lowerDamage;
	affectedHero.takeDamage(damage);
}

void Hero::takeDamage(unsigned int damage)
{
	if (currentHealth == 0) {
		throw std::logic_error("Can not deal damage to a death hero!");
	}
	currentHealth -= damage;
	if (currentHealth < 0) currentHealth = 0;
}
