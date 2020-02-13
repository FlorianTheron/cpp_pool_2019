/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** AWeapon
*/

#ifndef AWEAPON_HPP_
#define AWEAPON_HPP_

#include <string>

class AWeapon {
    public:
        AWeapon(const std::string &name, int apcost, int damage);
        virtual ~AWeapon();

        inline std::string getName() const { return this->_name; };
        inline int getAPCost() const { return this->_apCost; };
        inline int getDamage() const { return this->_damage; };

        virtual void attack() const = 0;

    protected:
        const std::string _name;
        int _apCost;
        int _damage;
};

#endif /* !AWEAPON_HPP_ */
