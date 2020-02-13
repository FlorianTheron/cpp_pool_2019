/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** MiningBarge
*/

#ifndef MININGBARGE_HPP_
#define MININGBARGE_HPP_

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"
#include <vector>

class MiningBarge
{
    public:
        MiningBarge();
        ~MiningBarge();
        void equip(IMiningLaser *laser);
        void mine(IAsteroid *asteroid) const;
    private:
        std::vector<IMiningLaser *> _lasers;
};

#endif /* !MININGBARGE_HPP_ */
