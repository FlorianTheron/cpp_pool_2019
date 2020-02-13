/*
** EPITECH PROJECT, 2020
** cpp_d17_2019
** File description:
** Cesar
*/

#include "Cesar.hpp"
#include <iostream>

Cesar::Cesar()
{
    _index = 3;
}

Cesar::~Cesar()
{
}

void Cesar::encryptChar(char letter)
{
    if (std::isalpha(letter) && std::isupper(letter))
    {
        std::cout << static_cast<char>('A' + (letter + _index - 'A') % 26);
    }
    else if (std::isalpha(letter) && std::islower(letter))
    {
         std::cout << static_cast<char>('a' + (letter + _index - 'a') % 26);
    }
    else
    {
        std::cout << letter;
    }
    _index += 1;
}

void Cesar::decryptChar(char letter)
{
    if (std::isalpha(letter) && std::islower(letter))
    {
        letter -= (_index % 26);
        if (!std::isalpha(letter) || std::isupper(letter))
            letter += 26;
    }
    else if (std::isalpha(letter))
    {
        letter -= (_index % 26);
        if (!std::isalpha(letter))
            letter += 26;
    }
    std::cout << static_cast<char>(letter);
    _index += 1;
}

void Cesar::reset()
{
    _index = 3;
}