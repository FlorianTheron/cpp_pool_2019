/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** AWeapon
*/

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage) : _name(name)
{
    this->_apCost = apcost;
    this->_damage = damage;
}

AWeapon::~AWeapon()
{
}