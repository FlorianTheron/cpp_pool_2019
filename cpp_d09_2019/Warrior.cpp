/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Warrior
*/

#include "Warrior.hpp"

Warrior::Warrior(const std::string &name, int level, const std::string weaponName) : Character(name, level), _weaponName(weaponName)
{
    this->_class = typeid(this).name();
    this->_strength = 12;
    this->_stamina = 12;
    this->_intelligence = 6;
    this->_spirit = 5;
    this->_agility = 7;
    std::cout << "I'm " << this->_name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

int Warrior::CloseAttack()
{
    if (this->Range != CLOSE)
    {
        return 0;
    }
    if (this->_power < 30)
    {
        std::cout << this->_name << " out of power" << std::endl;
        return 0;
    }
    else
    {
        std::cout << this->_name << " strikes with his " << this->_weaponName << std::endl;
        this->_power -= 30;
        return (this->_strength + 20);
    }
}

int Warrior::RangeAttack()
{
    if (this->_power < 10)
    {
        std::cout << this->_name << " out of power" << std::endl;
    }
    else
    {
        std::cout << this->_name << " intercepts" << std::endl;
        this->_power -= 10;
        this->Range = CLOSE;
    }
    return 0;
}