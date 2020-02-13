/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Ice
*/

#ifndef ICE_HPP_
#define ICE_HPP_

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria {
    public:
        Ice();
        Ice(const Ice &);
        ~Ice();
        AMateria *clone() const;
        void use(ICharacter &target);
};

#endif /* !ICE_HPP_ */
