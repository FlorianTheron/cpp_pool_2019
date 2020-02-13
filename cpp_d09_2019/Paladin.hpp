/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Paladin
*/

#ifndef PALADIN_HPP_
#define PALADIN_HPP_

#include "Priest.hpp"
#include "Warrior.hpp"

class Paladin : public Warrior, public Priest {
    public:
        Paladin(const std::string &name, int level, const std::string weaponName = "hammer");
        ~Paladin();
        int CloseAttack();
        int RangeAttack();
        void Heal();
        void RestorePower();
        int Intercept();

        using Warrior::getAgility;
        using Warrior::getLvl;
        using Warrior::getName;
        using Warrior::getIntelligence;
        using Warrior::getPower;
        using Warrior::getStamina;
        using Warrior::getStrength;
        using Warrior::getPv;
        using Warrior::getWeapon;
};

#endif /* !PALADIN_HPP_ */
