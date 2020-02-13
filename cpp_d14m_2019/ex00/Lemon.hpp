/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** Lemon
*/

#ifndef LEMON_HPP_
#define LEMON_HPP_

#include "Fruit.hpp"

class Lemon : public Fruit 
{
    public:
        Lemon();
        ~Lemon();
        std::string getName() const override;
        int getVitamins() const override;
};

#endif /* !LEMON_HPP_ */
