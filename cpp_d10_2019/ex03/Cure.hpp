/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Cure
*/

#ifndef CURE_HPP_
#define CURE_HPP_

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria {
    public:
        Cure();
        Cure(const Cure &);
        ~Cure();
        virtual AMateria *clone() const;
        void use(ICharacter &target);
};

#endif /* !CURE_HPP_ */
