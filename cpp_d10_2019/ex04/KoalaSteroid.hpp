/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** KoalaSteroid
*/

#ifndef KOALASTERIOD_HPP_
#define KOALASTERIOD_HPP_

#include "IAsteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include <string>

class KoalaSteroid : public IAsteroid {
    public:
        KoalaSteroid();
        ~KoalaSteroid();
        std::string beMined(DeepCoreMiner *) const;
        std::string beMined(StripMiner *) const;
        std::string getName() const;
    private:
        const std::string _name;
};

#endif /* !KOALASTERIOD_HPP_ */
