/*
** EPITECH PROJECT, 2020
** cpp_d08_2019
** File description:
** Carrier
*/

#include "Carrier.hpp"

Carrier::Carrier(std::string id) : _energy(300), _attack(100), _toughness(90)
{
    this->_id = id;
    this->_speed = 0;
}

Carrier::Carrier() : _id("''"), _energy(300), _attack(100), _toughness(90)
{
    this->_speed = 0;
}

Carrier::~Carrier()
{
}

void Carrier::setEnergy(size_t energy)
{
    if (energy > 600)
    {
        this->_energy = 600;
    }
    else
    {
        this->_energy = energy;
    }
}

void Carrier::setSpeed(size_t speed)
{
    if (speed > 100)
    {
        this->_speed = 100;
    }
    else
    {
        this->_speed = speed;
    }
}

Carrier &Carrier::operator<<(size_t energy)
{
    size_t requiredEnergy = 600 - this->_energy;

    if (energy >= requiredEnergy)
    {
        this->setEnergy(this->getEnergy() + requiredEnergy);
        energy -= requiredEnergy;
    }
    else
    {
        this->setEnergy(this->getEnergy() + energy);
        energy = 0;
    }
}

std::ostream &operator<<(std::ostream &stream, Carrier &carrier)
{
    int i = 0;

    stream << "Carrier '" << carrier.getId() << "' Droid(s) on-board:" << std::endl;
    for (auto item : carrier.getDroids())
    {
        stream << "[" << i << "] : " << item.getStatus() << std::endl;
    }
    return stream;
}