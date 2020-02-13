/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** Fruit
*/

#include "Fruit.hpp"

Fruit::Fruit(const std::string &name, const int &vitamins) : _name(name)
{
    this->_vitamins = vitamins;
}

Fruit::~Fruit()
{
}

std::string Fruit::getName() const
{
    return (this->_name);
}

int Fruit::getVitamins() const
{
    return (this->_vitamins);
}