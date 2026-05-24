#include <stdexcept>
#include <iostream>
#include <print>

#include "Archer.h"
#include "HeroesStats.h"
#include "InputValidator.h"

Archer::Archer(const std::string name):
    Hero(name, archerHealth, archerLowerDamage, archerUpperDamage)
{}

void Archer::attack(Hero& affectedHero)
{
    unsigned int damage = (std::rand() % (archerUpperDamage - archerLowerDamage + 1)) + archerLowerDamage;
    if (damage >= archerSpecialLower && damage <= archerSpecialUpper) {
        bool special;
        std::print("Do you want to use your Archer special ability? Please type Y/N:\n");
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
    }
    affectedHero.takeDamage(damage);
}

unsigned int Archer::specialAbility(int tempDamage)
{
    return tempDamage * 2;
}
