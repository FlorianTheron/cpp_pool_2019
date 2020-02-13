/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Priest
*/

#include "Priest.hpp"

Priest::Priest(const std::string &name, int level) : Character(name, level), Mage(name, level)
{
    this->_strength = 4;
    this->_stamina = 4;
    this->_intelligence = 42;
    this->_spirit = 21;
    this->_agility = 2;
    std::cout << this->_name << " enters in the order" << std::endl;
}

Priest::~Priest()
{
}

int Priest::CloseAttack()
{
    if (this->Range != CLOSE)
    {
        return 0;
    }
    if (this->_power < 10)
    {
        std::cout << this->_name << " out of power" << std::endl;
        return 0;
    }
    else
    {
        std::cout << this->_name << " uses a spirit explosion" << std::endl;
        this->_power -= 10;
        this->Range = RANGE;
        return (this->_spirit + 10);
    }
}

void Priest::Heal()
{
    if (this->_power < 10)
    {
        std::cout << this->_name << " out of power" << std::endl;
    }
    else
    {
        int requireHp = 100 - this->_hp;

        if (70 > requireHp)
        {
            this->_hp = 100;
        }
        else
        {
            this->_hp += 70;
        }
        std::cout << this->_name << " casts a little heal spell" << std::endl;
        this->_power -= 10;
    }
}