/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** Borg
*/

#ifndef BORG_HPP_
#define BORG_HPP_

#include <iostream>
#include "WarpSystem.hpp"
#include "Federation.hpp"
#include "Destination.hpp"

namespace Federation {
    namespace Starfleet {
        class Captain;
        class Ship;
        class Ensign;
    }
    class Ship;
}

namespace Borg
{
    class Ship
    {
        public:
            Ship(int _weaponFrequency = 20, short _repair = 3);
            ~Ship();
            void setupCore(WarpSystem::Core *core);
            void checkCore();
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
            int getShield();
            void setShield(int shield);
            int getWeaponFrequency();
            void setWeaponFrequency(int frequency);
            short getRepair();
            void setRepair(short repair);
            void fire(Federation::Starfleet::Ship *target);
            void fire(Federation::Ship *target);
            void repair();
        private:
            int _side;
            short _maxWarp;
            WarpSystem::Core *_core;
            Destination _location;
            Destination _home = UNICOMPLEX;
            int _shield;
            int _weaponFrequency;
            short _repair;
    };
}

#endif /* !BORG_HPP_ */
