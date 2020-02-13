/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Character
*/

#include "Character.hpp"

Character::Character(const std::string &name, int level) : _name(name)
{
    this->_hp = 100;
    this->_power = 100;
    this->_level = (level <= 0) ? 1 : level;
    this->_class = typeid(this).name();
    this->_strength = 5;
    this->_stamina = 5;
    this->_intelligence = 5;
    this->_spirit = 5;
    this->_agility = 5;
    this->Range = Character::CLOSE;
    std::cout << this->_name << " Created" << std::endl;
}

Character::~Character()
{
}

int Character::CloseAttack()
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
        std::cout << this->_name << " strikes with a wooden stick" << std::endl;
        this->_power -= 10;
        return (this->_strength + 10);
    }
}

int Character::RangeAttack()
{
    if (this->Range != RANGE)
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
        std::cout << this->_name << " tosses a stone" << std::endl;
        this->_power -= 10;
        return (this->_strength + 5);
    }
}

void Character::Heal()
{
    int requiredHp = 100 - this->_hp;

    if (requiredHp > 50)
    {
        this->_hp += 50;
    }
    else
    {
        this->_hp = 100;
    }
    std::cout << this->_name << " takes a potion" << std::endl;
}

void Character::RestorePower()
{
    this->_power = 100;
    std::cout << this->_name << " eats" << std::endl;
}

void Character::TakeDamage(int damage)
{
    if (damage < 0)
    {
        damage = 0;
    }
    if (this->_hp - damage <= 0)
    {
        this->_hp = 0;
        std::cout << this->_name << " out of combat" << std::endl;
    }
    else
    {
        this->_hp -= damage;
        std::cout << this->_name << " takes " << damage << " damage" << std::endl;
    }
}

const std::string &Character::getName() const
{
    return (this->_name);
}