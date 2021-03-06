/*
** EPITECH PROJECT, 2020
** ex02
** File description:
** Droid
*/

#ifndef DROID_HPP_
#define DROID_HPP_

#include <iostream>
#include "DroidMemory.hpp"

class Droid {
    public:
        Droid();
        Droid(const Droid&);
        Droid(std::string serial);
        ~Droid();

        inline std::string getId() const { return this->_serial; };
        inline void setId(std::string serial) { this->_serial = serial; };

        inline size_t getEnergy() const { return this->_energy; };
        void setEnergy(size_t energy);

        inline size_t getAttack() const { return this->_attack; };
        inline size_t getToughness() const { return this->_toughness; };

        inline void setStatus(std::string *status) { this->_status = status; };
        inline std::string *getStatus() const { return  this->_status; };

        inline DroidMemory *getBattleData() const { return this->_BattleData; };
        inline void setBattleData(DroidMemory *memory) { this->_BattleData = memory; };

        Droid &operator=(const Droid &);
        bool operator==(const Droid &) const;
        bool operator!=(const Droid &) const;
        void operator<<(size_t &);
        bool operator()(const std::string *, size_t);
    private:
        std::string _serial;
        size_t _energy;
        const size_t _attack;
        const size_t _toughness;
        std::string *_status;
        DroidMemory *_BattleData;
};

std::ostream &operator<<(std::ostream &, const Droid &);

#endif /* !DROID_HPP_ */