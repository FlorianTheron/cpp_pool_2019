/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** Lemon
*/

#ifndef LEMON_HPP_
#define LEMON_HPP_

#include "Fruit.hpp"

class Lemon : public virtual Fruit 
{
    public:
        Lemon(const std::string & = "lemon", const int & = 3);
        ~Lemon();
};

#endif /* !LEMON_HPP_ */
