/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** MiningBarge
*/

#include "MiningBarge.hpp"

MiningBarge::MiningBarge()
{
}

MiningBarge::~MiningBarge()
{
}

void MiningBarge::equip(IMiningLaser *laser)
{
    if (this->_lasers.size() < 4)
    {
        this->_lasers.push_back(laser);
    }
}

void MiningBarge::mine(IAsteroid *asteroid) const
{
    for (auto laser : this->_lasers)
    {
        laser->mine(asteroid);
    }
}