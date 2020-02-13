/*
** EPITECH PROJECT, 2020
** cpp_d07a_2019
** File description:
** Parts
*/

#include "Parts.hpp"

Arms::Arms(std::string serial, bool functional)
{
    this->_serial = serial;
    this->_functional = functional;
    this->_type = "Arms";
}

Legs::Legs(std::string serial, bool functional)
{
    this->_serial = serial;
    this->_functional = functional;
    this->_type = "Legs";
}

Head::Head(std::string serial, bool functional)
{
    this->_serial = serial;
    this->_functional = functional;
    this->_type = "Head";
}

bool Parts::isFunctional() const
{
    return (this->_functional);
}

std::string Parts::serial() const
{
    return (this->_serial);
}

void Parts::informations() const
{
    std::cout << "\t[Parts] " << this->getType() << " " << this->_serial << " status : ";
    if (this->isFunctional())
        std::cout << "OK";
    else
        std::cout << "KO";
    std::cout << std::endl;
}

std::string Parts::getType() const
{
    return (this->_type);
}