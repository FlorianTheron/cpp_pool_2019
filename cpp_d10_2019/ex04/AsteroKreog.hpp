/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** AsteriodKreog
*/

#ifndef ASTERIODKREOG_HPP_
#define ASTERIODKREOG_HPP_

#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include "IAsteroid.hpp"
#include <string>

class AsteroKreog : public IAsteroid {
    public:
        AsteroKreog();
        ~AsteroKreog();
        std::string beMined(DeepCoreMiner *) const;
        std::string beMined(StripMiner *) const;
        std::string getName() const;
    private:
        const std::string _name;
};

#endif /* !ASTERIODKREOG_HPP_ */
