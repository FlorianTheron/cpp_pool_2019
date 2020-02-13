/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Warrior
*/

#ifndef WARRIOR_HPP_
#define WARRIOR_HPP_

#include "Character.hpp"

class Warrior : public virtual Character {
    public:
        Warrior(const std::string &name, int level, const std::string weaponName = "hammer");
        int CloseAttack();
        int RangeAttack();
        inline std::string getWeapon() const { return this->_weaponName; };
    protected:
        const std::string _weaponName;
};

#endif /* !WARRIOR_HPP_ */
