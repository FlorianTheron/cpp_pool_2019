/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Hunter
*/

#ifndef HUNTER_HPP_
#define HUNTER_HPP_

#include "Warrior.hpp"

class Hunter : public Warrior {
    public:
        Hunter(const std::string &name, int level, const std::string weaponName = "sword");
        ~Hunter();

        int CloseAttack();
        int RangeAttack();
        void RestorePower();
};

#endif /* !HUNTER_HPP_ */
