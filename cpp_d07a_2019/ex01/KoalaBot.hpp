/*
** EPITECH PROJECT, 2020
** cpp_d07a_2019
** File description:
** KoalaBot
*/

#ifndef KOALABOT_HPP_
#define KOALABOT_HPP_

#include <array>
#include "Parts.hpp"

class KoalaBot {
    public:
        KoalaBot(std::string serial = "Bob-01");
        ~KoalaBot();
        void setParts(Parts &);
        void swapParts(Parts &);
        void informations() const;
        bool status() const;
    protected:
    private:
        std::string _serial;
        std::array<Parts, 3> parts;
};

#endif /* !KOALABOT_HPP_ */
