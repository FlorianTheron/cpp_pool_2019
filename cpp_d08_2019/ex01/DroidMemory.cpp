/*
** EPITECH PROJECT, 2020
** cpp_d08_2019
** File description:
** DroidMemory
*/

#include "DroidMemory.hpp"

DroidMemory::DroidMemory()
{
    this->_exp = 0;
    this->_fingerprint = random();
}

DroidMemory::~DroidMemory()
{
}


DroidMemory DroidMemory::operator<<(const DroidMemory &droidMemory)
{
    this->_exp += droidMemory._exp;
    this->_fingerprint ^= droidMemory._fingerprint;
    return (droidMemory);
}

DroidMemory DroidMemory::operator>>(DroidMemory &droidMemory)
{
    droidMemory._exp += this->_exp;
    droidMemory._fingerprint ^= this->_fingerprint;
    return (droidMemory);
}

DroidMemory DroidMemory::operator+=(size_t exp)
{
    this->_exp += exp;
    this->_fingerprint ^= exp;
    return (*this);
}

DroidMemory DroidMemory::operator+=(DroidMemory &droidMemory)
{
    this->_exp += droidMemory._exp;
    this->_fingerprint ^= droidMemory._fingerprint;
    return (*this);
}

DroidMemory *DroidMemory::operator+(size_t exp) const
{
    DroidMemory *newDroidMemory = new DroidMemory();

    newDroidMemory->setExp(this->_exp + exp);
    newDroidMemory->setFingerprint(this->_fingerprint ^ exp);
    return (newDroidMemory);
}

DroidMemory *DroidMemory::operator+(const DroidMemory &droidMemory) const
{
    DroidMemory *newDroidMemory = new DroidMemory();

    newDroidMemory->setExp(this->_exp + droidMemory._exp);
    newDroidMemory->setFingerprint(this->_fingerprint ^ droidMemory._fingerprint);
    return (newDroidMemory);
}

std::ostream &operator<<(std::ostream &stream, DroidMemory &droid)
{
    return stream << "DroidMemory '" << droid.getFingerprint() << "', " << droid.getExp();
}





