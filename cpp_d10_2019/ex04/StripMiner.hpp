/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** StripMiner
*/

#ifndef STRIPMINER_HPP_
#define STRIPMINER_HPP_

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"
#include <iostream>

class StripMiner : public IMiningLaser {
    public:
        StripMiner();
        ~StripMiner();
        void mine(IAsteroid *);
};
#endif /* !STRIPMINER_HPP_ */
