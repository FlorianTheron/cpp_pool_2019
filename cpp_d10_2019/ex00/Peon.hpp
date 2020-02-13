/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Peon
*/

#ifndef PEON_HPP_
#define PEON_HPP_

#include "Victim.hpp"

class Peon : public Victim {
    public:
        Peon(const std::string &name);
        ~Peon();

        void getPolymorphed() const;
};

#endif /* !PEON_HPP_ */
