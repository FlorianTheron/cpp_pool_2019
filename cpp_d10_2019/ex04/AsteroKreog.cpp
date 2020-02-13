/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** AsteroKreog
*/

#include "AsteroKreog.hpp"

AsteroKreog::AsteroKreog()
{
}

AsteroKreog::~AsteroKreog()
{
}

std::string AsteroKreog::getName() const
{
    return this->_name;
}

std::string AsteroKreog::beMined(__attribute__((unused)) DeepCoreMiner *laser) const
{
    return ("Sullite");
}

std::string AsteroKreog::beMined(__attribute__((unused)) StripMiner *laser) const
{
    return ("Kreogium");
}