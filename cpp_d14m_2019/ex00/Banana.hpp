/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** Banana
*/

#ifndef BANANA_HPP_
#define BANANA_HPP_

#include "Fruit.hpp"

class Banana : public Fruit
{
    public:
        Banana();
        ~Banana();
        std::string getName() const;
        int getVitamins() const;
};

#endif /* !BANANA_HPP_ */
