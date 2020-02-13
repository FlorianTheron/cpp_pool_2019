/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** KoalaDoctor
*/

#ifndef KOALADOCTOR_HPP_
#define KOALADOCTOR_HPP_

#include <iostream>
#include <fstream>
#include "SickKoala.hpp"
#include "KoalaNurse.hpp"

class KoalaDoctor {
    public:
        KoalaDoctor(std::string name);
        ~KoalaDoctor();
        void diagnose(SickKoala *koala);
        void timeCheck();
        std::string getName();
    private:
        std::string name;
        bool working;
};

#endif /* !KOALADOCTOR_HPP_ */
