/*
** EPITECH PROJECT, 2020
** cpp_d08_2019
** File description:
** DroidMemory
*/

#ifndef DROIDMEMORY_HPP_
#define DROIDMEMORY_HPP_

#include <iostream>

class DroidMemory {
    public:
        DroidMemory(size_t exp);
        DroidMemory();
        ~DroidMemory();

        inline void setFingerprint(size_t fingerprint) { this->_fingerprint = fingerprint; };
        inline size_t getFingerprint() { return this->_fingerprint; };

        inline void setExp(size_t exp) { this->_exp = exp; };
        inline size_t getExp() { return this->_exp; };

        DroidMemory operator=(DroidMemory *);
        DroidMemory operator<<(DroidMemory &);
        DroidMemory operator>>(DroidMemory &);
        DroidMemory operator+=(size_t);
        DroidMemory operator+=(DroidMemory &);
        DroidMemory *operator+(size_t) const;
        DroidMemory *operator+(const DroidMemory &) const;

    private:
        size_t _fingerprint;
        size_t _exp;
};

std::ostream &operator<<(std::ostream &, DroidMemory &);

#endif /* !DROIDMEMORY_HPP_ */
