/*
** EPITECH PROJECT, 2020
** cpp_d08_2019
** File description:
** Carrier
*/

#ifndef CARRIER_HPP_
#define CARRIER_HPP_


#include <string>
#include <array>
#include "Droid.hpp"

class Carrier {
    public:
        Carrier(std::string id);
        Carrier();
        ~Carrier();

        void setId(std::string id);
        void setEnergy(size_t energy);
        void setSpeed(size_t speed);

        inline std::string getId() const { return this->_id; };
        inline size_t getEnergy() const { return this->_energy; };
        inline size_t getAttack() const { return this->_attack; };
        inline size_t getToughness() const { return this->_toughness; };
        inline size_t getSpeed() const { return this->_speed; };
        inline std::array<Droid, 5> getDroids() { return this->_droids; };

        Carrier &operator<<(size_t);
    private:
        std::string _id;
        size_t _energy;
        const size_t _attack;
        const size_t _toughness;
        size_t _speed;
        std::array<Droid, 5> _droids;
};

std::ostream &operator<<(std::ostream &stream, Carrier &carrier);

#endif /* !CARRIER_HPP_ */
