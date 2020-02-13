/*
** EPITECH PROJECT, 2020
** cpp_d07a_2019
** File description:
** Phaser
*/

#ifndef PHASER_HPP_
#define PHASER_HPP_

#include <iostream>
#include "Sounds.hpp"
#include <array>

class Phaser {
    public:
        enum AmmoType {
            REGULAR, PLASMA, ROCKET
        };
        Phaser(int maxAmmo = 20, AmmoType type = REGULAR);
        ~Phaser();

        void fire();
        void ejectClip();
        void ChangeType(AmmoType newType);
        void reload();
        void addAmmo(AmmoType type);

        int getCurrentAmmos() const;
    private:
        static const int _Empty = 0;
        AmmoType _type;
        std::array<int, 3> _currentAmmo;
        const int _maxAmmo;
        Sounds _sound;
};

#endif /* !PHASER_HPP_ */
