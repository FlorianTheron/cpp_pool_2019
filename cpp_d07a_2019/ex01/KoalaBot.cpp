/*
** EPITECH PROJECT, 2020
** cpp_d07a_2019
** File description:
** KoalaBot
*/

#include "KoalaBot.hpp"

KoalaBot::KoalaBot(std::string serial)
{
    this->_serial = serial;
    this->parts[0] = Arms();
    this->parts[1] = Legs();
    this->parts[2] = Head();
}

KoalaBot::~KoalaBot()
{
}

void KoalaBot::setParts(Parts &part)
{
    if (part.getType().compare("Arms") == 0)
    {
        this->parts[0] = part;
    }
    else if (part.getType().compare("Legs") == 0)
    {
        this->parts[1] = part;
    }
    else
    {
        this->parts[2] = part;
    }
}

void KoalaBot::swapParts(Parts &part)
{
    Parts tmp;
    if (part.getType().compare("Arms") == 0)
    {
        tmp = this->parts[0];
        this->parts[0] = part;
        part = tmp;
    }
    else if (part.getType().compare("Legs") == 0)
    {
        tmp = this->parts[1];
        this->parts[1] = part;
        part = tmp;
    }
    else
    {
        tmp = this->parts[2];
        this->parts[2] = part;
        part = tmp;
    }
}

bool KoalaBot::status() const
{
    for(auto item : this->parts)
    {
        if (!item.isFunctional())
            return (false);
    }
    return (true);
}

void KoalaBot::informations() const
{
    std::cout << "[KoalaBot] " << this->_serial << std::endl;
    for (auto item : this->parts)
    {
        item.informations();
    }
}