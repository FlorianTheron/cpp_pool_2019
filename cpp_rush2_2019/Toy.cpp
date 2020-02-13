/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Toy
*/

#include "Toy.hpp"

Toy::Toy(const std::string &title, const std::string &type) : Object(type), _title(title), _status(NOT_WRAPPED)
{
}

Toy::~Toy()
{
}

void Toy::isTaken()
{
}