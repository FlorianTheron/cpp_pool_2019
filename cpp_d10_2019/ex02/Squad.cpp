/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Squad
*/

#include "Squad.hpp"

Squad::Squad()
{
}

Squad::Squad(const Squad &squad)
{
    for (auto item : squad._units)
    {
        this->_units.push_back(item->clone());
    }
}

Squad &Squad::operator=(const Squad &squad)
{
    for (auto item : this->_units)
    {
        delete(item);
    }
    this->_units.clear();
    for (auto item : squad._units)
    {
        this->_units.push_back(item->clone());
    }
    return (*this);
}

Squad::~Squad()
{
    for (auto item : this->_units)
    {
        if (item)
        {
            delete(item);
        }
    }
    this->_units.clear();
}

int Squad::getCount() const
{
    return this->_units.size();
}

ISpaceMarine *Squad::getUnit(int index)
{
    if (this->_units.size() < static_cast<size_t>(index))
    {
        return (nullptr);
    }
    else
    {
        return this->_units.at(index);
    }
}

int Squad::push(ISpaceMarine *spaceMarine)
{
    if (spaceMarine == nullptr)
    {
        return this->_units.size();
    }
    for (auto item : this->_units)
    {
        if (item == spaceMarine)
        {
            return this->_units.size();
        }
    }
    this->_units.push_back(spaceMarine);
    return this->_units.size();
}