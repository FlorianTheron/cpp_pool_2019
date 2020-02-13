/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Teddy
*/

#ifndef TEDDY_HPP_
#define TEDDY_HPP_

#include "Toy.hpp"

class Teddy: public Toy {
    public:
        Teddy(const std::string &title);
        ~Teddy();
        void isTaken();
};

#endif /* !TEDDY_HPP_ */
