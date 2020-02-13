/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Character
*/

#include "Character.hpp"

Character::Character(const std::string &name) : _name(name)
{
    this->_materias.fill(NULL);
}

Character::~Character()
{
}

Character::Character(const Character &character)
{
    for (size_t i = 0; i < 4; i += 1)
    {
        this->_materias[i] = character._materias[i]->clone();
    }
}

Character &Character::operator=(const Character &character)
{
    for (size_t i = 0; i < 4; i += 1)
    {
        if (this->_materias[i] != NULL)
        {
            delete(this->_materias[i]);
        }
    }

    for (int i = 0; i < 4; i += 1)
    {
        this->_materias[i] = character._materias[i]->clone();
    }
    return (*this);
}

void Character::equip(AMateria *m)
{
    for (size_t i = 0; i < 4; i += 1)
    {
        if (this->_materias[i] == NULL)
        {
            this->_materias[i] = m;
            break;
        }
    }
}


void Character::unequip(int idx)
{
    if (this->_materias.size() < static_cast<size_t>(idx) || idx < 0)
    {
        return;
    }
    this->_materias[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (this->_materias.size() < static_cast<size_t>(idx))
    {
        return;
    }
    if (this->_materias[idx] != NULL)
    {
        this->_materias[idx]->use(target);
    }
}