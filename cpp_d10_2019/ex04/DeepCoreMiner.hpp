/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** DeepCoreMiner
*/

#ifndef DEEPCOREMINER_HPP_
#define DEEPCOREMINER_HPP_

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"
#include <iostream>

class DeepCoreMiner : public IMiningLaser {
    public:
        DeepCoreMiner();
        ~DeepCoreMiner();
        void mine(IAsteroid *);
};

#endif /* !DEEPCOREMINER_HPP_ */
