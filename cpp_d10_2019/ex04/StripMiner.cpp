/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** StripMiner
*/

#include "StripMiner.hpp"

StripMiner::StripMiner()
{
}

StripMiner::~StripMiner()
{
}

void StripMiner::mine(IAsteroid *asteriod)
{
    if (asteriod != nullptr)
    {
        std::cout << "* strip mining... got " << asteriod->beMined(this) << "! *" << std::endl;
    }
}