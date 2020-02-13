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

bool DroidMemory::operator==(const DroidMemory &droidMemory) const
{
    if (this->_exp == droidMemory._exp && this->_fingerprint == droidMemory._fingerprint)
    {
        return (true);
    }
    else
    {
        return (false);
    }
}

bool DroidMemory::operator!=(const DroidMemory &droidMemory) const
{
    if (DroidMemory::operator==(droidMemory) == true)
    {
        return (false);
    }
    else
    {
        return (true);
    }
    
}

bool DroidMemory::operator<(const DroidMemory &droidMemory) const
{
    return (this->_exp < droidMemory._exp);
}

bool DroidMemory::operator<(size_t exp) const
{
    return (this->_exp < exp);
}

bool DroidMemory::operator<=(const DroidMemory &droidMemory) const
{
    return (this->_exp <= droidMemory._exp);
}

bool DroidMemory::operator<=(size_t exp) const
{
    return (this->_exp <= exp);
}

bool DroidMemory::operator>(const DroidMemory &droidMemory) const
{
    return (this->_exp > droidMemory._exp);
}

bool DroidMemory::operator>(size_t exp) const
{
    return (this->_exp > exp);
}

bool DroidMemory::operator>=(const DroidMemory &droidMemory) const
{
    return (this->_exp >= droidMemory._exp);
}

bool DroidMemory::operator>=(size_t exp) const
{
    return (this->_exp >= exp);
}

DroidMemory DroidMemory::operator<<(DroidMemory &droidMemory)
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

DroidMemory *DroidMemory::operator+(size_t exp)
{
    DroidMemory *newDroid = new DroidMemory();

    newDroid->setExp(this->_exp + exp);
    newDroid->setFingerprint(this->_fingerprint ^ exp);
    return (newDroid);
}

DroidMemory *DroidMemory::operator+(DroidMemory droidMemory)
{
    DroidMemory *newDroid = new DroidMemory();

    newDroid->setExp(this->_exp + droidMemory._exp);
    newDroid->setFingerprint(this->_fingerprint ^ droidMemory._fingerprint);
    return (newDroid);
}

DroidMemory &DroidMemory::operator=(const DroidMemory &droidMemory)
{
    this->_exp = droidMemory._exp;
    this->_fingerprint = droidMemory._fingerprint;
}

std::ostream &operator<<(std::ostream &stream, DroidMemory &droid)
{
    return stream << "DroidMemory '" << droid.getFingerprint() << "', " << droid.getExp();
}