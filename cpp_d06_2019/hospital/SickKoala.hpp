/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** SickKoala
*/

#ifndef SICKKOALA_HPP_
#define SICKKOALA_HPP_

#include <iostream>
#include <string>

class SickKoala {
    public:
        SickKoala(std::string name);
        ~SickKoala();
        void poke();
        bool takeDrug(std::string drug);
        void overDrive(std::string phrase);
        std::string getName();
    private:
        std::string name;
};

#endif /* !SICKKOALA_HPP_ */
