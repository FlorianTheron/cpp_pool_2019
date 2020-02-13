/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** Federation
*/

#ifndef FEDERATION_HPP_
#define FEDERATION_HPP_

#include "WarpSystem.hpp"
#include "Destination.hpp"
#include "Borg.hpp"

namespace Borg {
    class Ship;
}

namespace Federation
{
    class Ship
    {
        public:
            Ship(int length, int width, std::string name);
            ~Ship();
            void setupCore(WarpSystem::Core *core);
            void checkCore();
            WarpSystem::Core *getCore();
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
            int getShield();
            void setShield(int shield);
            int getTorpedo();
            void setTorpedo(int torpedo);
        private:
            int _length;
            int _width;
            std::string _name;
            short _maxWarp;
            WarpSystem::Core *_core;
            Destination _location;
            Destination _home = VULCAN;
            int _shield;
            int _photonTorpedo;
    };

    namespace Starfleet
    {
        class Captain
        {
            public:
                Captain(std::string name);
                ~Captain();
                std::string getName();
                int getAge();
                void setAge(int age);
            private:
                std::string _name;
                int _age = 0;
        };

        class Ship {
            public:
                Ship();
                Ship(int length, int width, std::string name, short maxWarp, int torpedo = 0);
                ~Ship();
                void setupCore(WarpSystem::Core *core);
                void checkCore();
                void promote(Captain *captain);
                bool move(int warp, Destination d);
                bool move(int warp);
                bool move(Destination d);
                bool move();
                int getShield();
                void setShield(int shield);
                int getTorpedo();
                void setTorpedo(int torpedo);
                void fire(Borg::Ship *);
                void fire(int torpedoes, Borg::Ship *);
            private:
                int _length;
                int _width;
                std::string _name;
                short _maxWarp;
                WarpSystem::Core *_core;
                Destination _location;
                Destination _home = EARTH;
                int _shield;
                int _photonTorpedo;
                Captain *_captain;
        };

        class Ensign {
            public:
                Ensign(std::string name);
                ~Ensign();
            private:
                std::string _name;
        };
    }
}

#endif /* !FEDERATION_HPP_ */
