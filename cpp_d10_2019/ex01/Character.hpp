/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Character
*/

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include "AWeapon.hpp"
#include "AEnemy.hpp"
#include <iostream>

class Character {
    public:
        Character(const std::string &name);
        ~Character();

        void recoverAP();
        void equip(AWeapon *);
        void attack(AEnemy *);
        inline std::string getName() const { return this->_name; };
        inline int getAP() const { return this->_ap; };
        inline AWeapon *getWeapon() const { return this->_weapon; };
        inline bool haveWeapon() const { return this->_weapon == nullptr; };
    private:
        const std::string _name;
        int _ap;
        AWeapon *_weapon;
};

std::ostream &operator<<(std::ostream &, const Character &);

#endif /* !CHARACTER_HPP_ */
