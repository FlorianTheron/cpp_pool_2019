/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** AMateria
*/

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) :  _xp(0), _type(type)
{
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(const AMateria &materia)
{
    this->_xp = materia._xp;
    return *this;
}

void AMateria::use(__attribute__((unused)) ICharacter &character)
{
    this->_xp += 10;
}