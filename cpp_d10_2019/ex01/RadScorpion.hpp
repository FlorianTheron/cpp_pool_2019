/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** RadScorpion
*/

#ifndef RADSCORPION_HPP_
#define RADSCORPION_HPP_

#include "AEnemy.hpp"
#include <iostream>

class RadScorpion : public AEnemy {
    public:
        RadScorpion();
        ~RadScorpion();
        void takeDamage(int damage);
};

#endif /* !RADSCORPION_HPP_ */
