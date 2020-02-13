/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** TacticalMarine
*/

#ifndef TACTICALMARINE_HPP_
#define TACTICALMARINE_HPP_

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : public ISpaceMarine {
    public:
        TacticalMarine();
        ~TacticalMarine();
        ISpaceMarine* clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
};

#endif /* !SPACEMARINE_HPP_ */
