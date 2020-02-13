/*
** EPITECH PROJECT, 2020
** cpp_d07a_2019
** File description:
** Phaser
*/

#include "Phaser.hpp"

Phaser::Phaser(int maxAmmo, AmmoType type) : _maxAmmo(maxAmmo)
{
    if (maxAmmo < 0)
    {
        maxAmmo = 0;
    }
    this->_type = type;
    this->_currentAmmo.fill(maxAmmo);
}

Phaser::~Phaser()
{
}

void Phaser::fire()
{
    if (this->_currentAmmo[this->_type] == 0)
    {
        std::cout << "Clip empty, please reload" << std::endl;
        return;
    }
    if (this->_type == Phaser::REGULAR)
    {
        std::cout << this->_sound.Relugar << std::endl;
    }
    else if (this->_type == Phaser::PLASMA)
    {
        std::cout << this->_sound.Plasma << std::endl;
    }
    else
    {
        std::cout << this->_sound.Rocket << std::endl;
    }
    this->_currentAmmo[this->_type] -= 1;
}

void Phaser::ejectClip()
{
    this->_currentAmmo[this->_type] = 0;
}

void Phaser::ChangeType(Phaser::AmmoType type)
{
    this->_type = type;
    std::cout << "Switching ammo to type: ";
    if (type == Phaser::REGULAR)
    {
        std::cout << "regular";
    }
    else if (type == Phaser::PLASMA)
    {
        std::cout << "plasma";
    }
    else
    {
        std::cout << "rocket";
    }
    std::cout << std::endl;
}

void Phaser::reload()
{
    this->_currentAmmo[this->_type] = this->_maxAmmo;
    std::cout << "Reloading..." << std::endl;
}

void Phaser::addAmmo(Phaser::AmmoType type)
{
    if (this->_currentAmmo[type] == this->_maxAmmo)
    {
        std::cout << "Clip full" << std::endl;
    }
    else
    {
        this->_currentAmmo[type] = this->_maxAmmo;
    }
}

int Phaser::getCurrentAmmos() const
{
    return (this->_currentAmmo[this->_type]);
}