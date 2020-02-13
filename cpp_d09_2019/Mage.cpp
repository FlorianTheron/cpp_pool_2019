/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Mage
*/

#include "Mage.hpp"

Mage::Mage(const std::string &name, int level) : Character(name, level)
{
    this->_strength = 6;
    this->_stamina = 6;
    this->_intelligence = 12;
    this->_spirit = 11;
    this->_agility = 7;
    std::cout << this->_name << " teleported" << std::endl;
}

Mage::~Mage()
{
}

int Mage::CloseAttack()
{
    if (this->Range != CLOSE)
    {
        return 0;
    }
    if (this->_power < 10)
    {
        std::cout << this->_name << " out of power" << std::endl;
    }
    else
    {
        std::cout << this->_name << " blinks" << std::endl;
        this->_power -= 10;
        this->Range = RANGE;
    }
    return 0;
}

int Mage::RangeAttack()
{
    if (this->_power < 25)
    {
        std::cout << this->_name << " out of power" << std::endl;
        return 0;
    }
    else
    {
        std::cout << this->_name << " launches a fire ball" << std::endl;
        this->_power -= 25;
        return (this->_spirit + 20);
    }
}

void Mage::RestorePower()
{
    int requiredPower = 100 - this->_power;

    if (this->_intelligence + 50 > requiredPower)
    {
        this->_power = 100;
    }
    else
    {
        this->_power += this->_intelligence + 50;
    }
    std::cout << this->_name << " takes a mana potion" << std::endl;
}