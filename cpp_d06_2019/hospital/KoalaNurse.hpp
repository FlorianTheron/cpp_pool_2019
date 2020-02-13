/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** KoalaNurse
*/

#ifndef KOALANURSE_HPP_
#define KOALANURSE_HPP_

#include <iostream>
#include <fstream>
#include "SickKoala.hpp"

class KoalaNurse {
    public:
        KoalaNurse(int id);
        ~KoalaNurse();
        void giveDrug(std::string drug, SickKoala *koala);
        std::string readReport(std::string name);
        void timeCheck();
        int getID();
    private:
        int id;
        bool working;
};

#endif /* !KOALANURSE_HPP_ */
