#include <stdexcept>
#include <iostream>
#include <print>

#include "Mage.h"
#include "HeroesStats.h"
#include "InputValidator.h"

Mage::Mage(const std::string& name):
    Hero(name, mageHealth, mageLowerDamage, mageUpperDamage)
{}

void Mage::attack(Hero& affectedHero)
{
    unsigned int damage = (std::rand() % (mageUpperDamage - mageLowerDamage + 1)) + mageLowerDamage;
    bool special;
    std::print("Do you want to use the Mage special ability? Please type Y/N:\n");
    while (true) {
        try {
            special = inputYesNoQ();
            break;
        }
        catch (const std::logic_error& e) {
            std::cout << e.what();
        }
    }
    if (special) damage = specialAbility(damage);
    affectedHero.takeDamage(damage);
}

unsigned int Mage::specialAbility(int tempDamage = 0)
{
    return mageSpecialDamage - tempDamage;
}