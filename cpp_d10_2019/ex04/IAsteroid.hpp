/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** IAsteriod
*/

#ifndef IASTEROID_HPP_
#define IASTEROID_HPP_

#include "StripMiner.hpp"
#include <string>

class DeepCoreMiner;
class StripMiner;

class IAsteroid
{
    public:
        virtual ~IAsteroid () {}
        virtual std::string beMined(DeepCoreMiner *) const = 0;
        virtual std::string beMined(StripMiner *) const = 0;
        virtual std::string getName() const = 0;
};

#endif /* !IASTERIOD_HPP_ */
