/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Teddy
*/

#include "Teddy.hpp"

Teddy::Teddy(const std::string &title) : Toy(title, "Teddy")
{
}

Teddy::~Teddy()
{
}

void Teddy::isTaken()
{
    std::cout << "gra hu" << std::endl;
}
