/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** PlasmaRifle
*/

#ifndef PLASMARIFLE_HPP_
#define PLASMARIFLE_HPP_

#include "AWeapon.hpp"
#include <iostream>

class PlasmaRifle : public AWeapon {
    public:
        PlasmaRifle();
        ~PlasmaRifle();
        void attack() const;
};

#endif /* !PLASMARIFLE_HPP_ */
