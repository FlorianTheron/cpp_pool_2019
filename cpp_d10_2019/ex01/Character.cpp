/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Character
*/

#include "Character.hpp"

Character::Character(const std::string &name) : _name(name), _ap(40), _weapon(NULL)
{
}

Character::~Character()
{
}

void Character::recoverAP()
{
    if (this->_ap + 10 > 40)
    {
        this->_ap = 40;
    }
    else
    {
        this->_ap += 10;
    }
}

void Character::equip(AWeapon *weapon)
{
    this->_weapon = weapon;
}

void Character::attack(AEnemy *enemy)
{
    if (this->_ap < this->_weapon->getAPCost() || !this->_weapon)
    {
        return;
    }
    else
    {
        std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
        this->_weapon->attack();

        enemy->takeDamage(this->_weapon->getDamage());
        if (enemy->getHP() <= 0)
        {
            delete(enemy);
        }

        this->_ap -= this->_weapon->getAPCost();
        if (this->_ap < 0)
        {
            this->_ap = 0;
        }
    }
}

std::ostream &operator<<(std::ostream &stream, const Character &character)
{
    if (character.getWeapon())
    {
        stream << character.getName() << " has " << character.getAP() << " AP and wields a "<< character.getWeapon()->getName() << std::endl;
    }
    else
    {
        stream << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;
    }
    return stream;
}