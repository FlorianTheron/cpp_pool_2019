/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Hunter
*/

#include "Hunter.hpp"
#include "Paladin.hpp"

Hunter::Hunter(const std::string &name, int level, const std::string weaponName) : Character(name, level), Warrior(name, level, weaponName)
{
    this->_strength = 9;
    this->_stamina = 9;
    this->_intelligence = 5;
    this->_spirit = 6;
    this->_agility = 25;
    std::cout << this->_name << " is born from a tree" << std::endl;
}

Hunter::~Hunter()
{
}

int Hunter::CloseAttack()
{
    return this->Warrior::CloseAttack();
}

int Hunter::RangeAttack()
{
    if (this->_power < 25)
    {
        std::cout << this->_name << " out of power" << std::endl;
        return 0;
    }
    else
    {
        std::cout << this->_name << " uses his bow" << std::endl;
        this->_power -= 25;
        return (this->_agility + 20);
    }
}

void Hunter::RestorePower()
{
    this->_power = 100;
    std::cout << this->_name << " meditates" << std::endl;
}