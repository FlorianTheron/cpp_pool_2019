/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** Lime
*/

#ifndef LIME_HPP_
#define LIME_HPP_

#include "Lemon.hpp"

class Lime  : public Lemon {
    public:
        Lime(const std::string & = "lime", const int & = 2);
        ~Lime();
};

#endif /* !LIME_HPP_ */
