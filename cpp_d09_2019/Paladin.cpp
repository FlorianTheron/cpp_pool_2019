/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Paladin
*/

#include "Paladin.hpp"

Paladin::Paladin(const std::string &name, int level, const std::string weaponName) : Character(name, level), Warrior(name, level, weaponName), Priest(name, level)
{
    this->Warrior::_strength = 9;
    this->Warrior::_stamina = 10;
    this->Warrior::_intelligence = 10;
    this->Warrior::_spirit = 10;
    this->Warrior::_agility = 2;
    std::cout << "the light falls on " << this->Warrior::_name << std::endl;
}

Paladin::~Paladin()
{
}

int Paladin::CloseAttack()
{
    return this->Warrior::CloseAttack();
}

int Paladin::RangeAttack()
{
    return this->Priest::RangeAttack();
}

void Paladin::Heal()
{
    return this->Priest::Heal();
}

void Paladin::RestorePower()
{
    return this->Warrior::RestorePower();
}

int Paladin::Intercept()
{
    return this->Warrior::RangeAttack();
}