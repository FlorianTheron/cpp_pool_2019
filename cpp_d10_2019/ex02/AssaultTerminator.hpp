/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** AssaultTerminator
*/

#ifndef ASSAULTTERMINATOR_HPP_
#define ASSAULTTERMINATOR_HPP_

#include "ISpaceMarine.hpp"
#include <iostream>
#include <cstring>

class AssaultTerminator : public ISpaceMarine {
    public:
        AssaultTerminator();
        ~AssaultTerminator();
        ISpaceMarine* clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
};

#endif /* !ASSAULTERMINATOR_HPP_ */
