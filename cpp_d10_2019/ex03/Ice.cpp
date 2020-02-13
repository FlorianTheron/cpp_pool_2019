/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Ice
*/

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &ice) : AMateria("ice")
{
    this->_xp = ice._xp;
}

Ice::~Ice()
{
}

AMateria *Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}