/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** Admiral
*/

#include "Admiral.hpp"

Federation::Starfleet::Admiral::Admiral(std::string name) : movePtr(&Federation::Starfleet::Ship::move), firePtr(&Federation::Starfleet::Ship::fire)
{
    this->_name = name;
    std::cout << "Admiral " << this->_name << " ready for action." << std::endl;
}

Federation::Starfleet::Admiral::~Admiral()
{
}

void Federation::Starfleet::Admiral::fire(Federation::Starfleet::Ship *ship, Borg::Ship *target)
{
    std::cout << "On order from Admiral " << this->_name << ":" << std::endl;
    (ship->*firePtr)(target);
}

bool Federation::Starfleet::Admiral::move(Federation::Starfleet::Ship *ship, Destination dest)
{
    return (ship->*movePtr)(dest);
}