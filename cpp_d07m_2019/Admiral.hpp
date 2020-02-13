/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** Admiral
*/


#ifndef ADMIRAL_HPP_
#define ADMIRAL_HPP_

#include <iostream>
#include "WarpSystem.hpp"
#include "Federation.hpp"
#include "Borg.hpp"

namespace Federation
{
    namespace Starfleet
    {
        class Admiral {
            public:
                Admiral(std::string name);
                ~Admiral();
                std::string _name;
                bool move(Federation::Starfleet::Ship *ship, Destination dest);
                void fire(Federation::Starfleet::Ship *ship, Borg::Ship *target);
            private:
                bool (Federation::Starfleet::Ship:: *movePtr)(Destination d);
                void (Federation::Starfleet::Ship:: *firePtr)(Borg::Ship *);
        };
    }
}

#endif /* !ADMIRAL_HPP_ */

