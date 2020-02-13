/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** MateriaSource
*/

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
}

MateriaSource::~MateriaSource()
{
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    for (auto materia : this->_learnedMaterias)
    {
        if (materia->getType() == type)
        {
            return materia->clone();
        }
    }
    return (NULL);
}

void MateriaSource::learnMateria(AMateria *materia)
{
    if (this->_learnedMaterias.size() < 4)
    {
        this->_learnedMaterias.push_back(materia);
    }
}