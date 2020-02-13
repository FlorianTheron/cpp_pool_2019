/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** Droid
*/

#include "Droid.hpp"

Droid::Droid(std::string serial) : _energy(50), _attack(25), _toughness(15), _status(new std::string("Standing by"))
{
    this->_serial = serial;
    std::cout << "Droid '" << this->_serial << "' Activated" << std::endl;
}

Droid::Droid() : _energy(50), _attack(25), _toughness(15), _status(new std::string("Standing by"))
{
    this->_serial = "";
    std::cout << "Droid '" << this->_serial << "' Activated" << std::endl;
}

Droid::Droid(const Droid &droid) : _energy(droid._energy), _attack(droid._attack), _toughness(droid._toughness),
_status(droid._status)
{
    this->_serial = droid._serial;
    std::cout << "Droid '" << this->_serial << "' Activated, Memory Dumped" << std::endl;
}


Droid::~Droid()
{
    std::cout << "Droid '" << this->_serial << "' Destroyed" << std::endl;
}

bool Droid::operator==(const Droid &droid) const
{
    if (this->_energy != droid.getEnergy())
        return (false);
    if (this->_serial.compare(droid.getId()) != 0)
        return (false);
    if (this->_status->compare(*droid.getStatus()) != 0)
        return (false);
    return (true);
}

bool Droid::operator!=(const Droid &droid) const
{
    if (Droid::operator==(droid) == true)
    {
        return (false);
    }
    else
    {
        return (true);
    }
}

void Droid::operator<<(size_t &size)
{
    size_t requiredEnergy = 100 - this->_energy;

    if (size >= requiredEnergy)
    {
        this->setEnergy(this->getEnergy() + requiredEnergy);
        size -= requiredEnergy;
    }
    else
    {
        this->setEnergy(this->getEnergy() + size);
        size = 0;
    }
}

void Droid::setEnergy(size_t energy)
{
    if (energy > 100)
    {
        this->_energy = 100;
    }
    else
    {
        this->_energy = energy;
    }
    
}

Droid &Droid::operator=(const Droid &droid)
{
    this->_serial = droid._serial;
    this->_energy = droid._energy;
    this->_status = droid._status;
    return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Droid &droid)
{
    return stream << "Droid '" << droid.getId() << "', " << *droid.getStatus() << ", " << droid.getEnergy();
}