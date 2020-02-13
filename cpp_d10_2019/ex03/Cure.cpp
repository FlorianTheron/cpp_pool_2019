/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Cure
*/

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &cure) : AMateria("cure")
{
    this->_xp = cure._xp;
}

Cure::~Cure()
{
}

AMateria *Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}