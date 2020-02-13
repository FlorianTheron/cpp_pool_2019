/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** LittlePony
*/

#include "LittlePony.hpp"

LittlePony::LittlePony(const std::string &title) : Toy(title, "LittlePony")
{
}

LittlePony::~LittlePony()
{
}

void LittlePony::isTaken()
{
    std::cout << "yo man" << std::endl;
}