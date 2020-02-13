/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** BorgQueen
*/

#ifndef BORGQUEEN_HPP_
#define BORGQUEEN_HPP_

#include "WarpSystem.hpp"
#include "Borg.hpp"
#include "Destination.hpp"

namespace Borg
{
    class BorgQueen
    {
        public:
            BorgQueen();
            ~BorgQueen();
            bool move(Ship *ship, Destination dest);
            void fire(Ship *ship, Federation::Starfleet::Ship *target);
            void destroy(Borg::Ship *ship, Federation::Ship *target);
        private:
            bool (Borg::Ship:: *movePtr)(Destination d);
            void (Borg::Ship:: *firePtr)(Federation::Starfleet::Ship *ship);
            void (Borg::Ship:: *destroyPtr)(Federation::Ship *ship);
    };
}

#endif /* !BORGQUEEN_HPP_ */
