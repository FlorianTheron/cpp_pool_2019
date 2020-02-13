/*
** EPITECH PROJECT, 2020
** Piscine C++
** File description:
** KoalaAction
*/

#ifndef KOALAACTION_HPP_
#define KOALAACTION_HPP_

#include "DomesticKoala.hpp"
#include <iostream>

class KoalaAction
{
    public:
        void eat(const std::string &str) { std::cout << "I eat: " << str << std::endl; };
        void goTo(const std::string &str) { std::cout << "I go to: " << str << std::endl; };
        void sleep(const std::string &str) { std::cout << "I sleep: " << str << std::endl; };
        void reproduce(const std::string &str) { std::cout << "I reproduce with: " << str << std::endl; };
    private:
    
};
#endif /* !KOALAACTION_HPP_ */
