/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** MateriaSource
*/

#ifndef AMATERIA_HPP_
#define AMATERIA_HPP_

#include "ICharacter.hpp"
#include <string>

class AMateria
{
    public:
        AMateria(const std::string &type);
        virtual ~AMateria();
        inline const std::string &getType() const { return this->_type; };
        inline unsigned int getXP() const { return this->_xp; };
        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target);

        AMateria &operator=(const AMateria &);
    protected:
        unsigned int _xp;
        const std::string _type;
};

#endif /* !MATERIASOURCE_HPP_ */
