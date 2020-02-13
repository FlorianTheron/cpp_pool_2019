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
    this->_BattleData = new DroidMemory();
    std::cout << "Droid '" << this->_serial << "' Activated" << std::endl;
}

Droid::Droid() : _energy(50), _attack(25), _toughness(15), _status(new std::string("Standing by"))
{
    this->_serial = "";
    std::cout << "Droid '" << this->_serial << "' Activated" << std::endl;
}

Droid::Droid(const Droid &droid) : _energy(50), _attack(25), _toughness(15),
_status(droid._status), _BattleData(droid._BattleData)
{
    this->_serial = droid._serial;
    std::cout << "Droid '" << this->_serial << "' Activated, Memory Dumped" << std::endl;
}

Droid::~Droid()
{
    if (this->_BattleData)
        delete(this->_BattleData);
    std::cout << "Droid '" << this->_serial << "' Destroyed" << std::endl;
}

bool Droid::operator==(const Droid &droid) const
{
    if (this->_status->compare(*droid.getStatus()) != 0)
        return (false);
    return (true);
}

bool Droid::operator!=(const Droid &droid) const
{
    if (Droid::operator==(droid) == true)
        return (false);
    return (true);
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
    this->_status = droid._status;
    this->_BattleData = droid._BattleData;
    return (*this);
}

bool Droid::operator()(const std::string *str, size_t requiredExp)
{
    if (this->_energy < 10 || this->_energy - 10 == 0)
    {
        this->setStatus(new std::string("Battery low"));
        this->_energy = 0;
        return (false);
    }
    else
    {
        this->_energy -= 10;

        if (this->_BattleData->getExp() > requiredExp)
        {
            this->setStatus(new std::string(*str + " - Completed!"));
            this->_BattleData->setExp(this->_BattleData->getExp() + (requiredExp / 2));
            return (true);
        }
        else
        {
            this->setStatus(new std::string(*str + " - Failed!"));
            this->_BattleData->setExp(this->_BattleData->getExp() + requiredExp);
            return (false);
        }
    }
}

std::ostream &operator<<(std::ostream &stream, const Droid &droid)
{
    return stream << "Droid '" << droid.getId() << "', " << *droid.getStatus() << ", " << droid.getEnergy();
}