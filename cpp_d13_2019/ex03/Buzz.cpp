/*
** EPITECH PROJECT, 2020
** cpp_d13_2019
** File description:
** Buzz
*/

#include "Buzz.hpp"

Buzz::Buzz(const std::string &name, const std::string &file) : Toy(Toy::BUZZ, name, file)
{
}

Buzz::~Buzz()
{
}

void Buzz::speak(const std::string &str)
{
    std::cout << "BUZZ: " << this->_name << " \"" << str << "\"" << std::endl;
}