/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** SickKoala
*/

#include "SickKoala.hpp"

SickKoala::SickKoala(std::string name)
{
    this->name = name;
}

SickKoala::~SickKoala()
{
    std::cout << "Mr." << this->name << ": Kreooogg!! I'm cuuuured!" << std::endl;
}

void SickKoala::poke()
{
    std::cout << "Mr." << this->name << ": Gooeeeeerrk!!" << std::endl;
}

bool SickKoala::takeDrug(std::string drug)
{
    std::string drugs[] = {"Mars", "Buronzand"};

    if (drug.compare(drugs[0]) == 0) {
        std::cout << "Mr." << this->name << ": Mars, and it kreogs!" << std::endl;
        return true;
    } else if (drug.compare(drugs[1]) == 0) {
        std::cout << "Mr." << this->name << ": And you'll sleep right away!" << std::endl;
        return true;
    } else {
        std::cout << "Mr." << this->name << ": Goerkreog!" << std::endl;
        return false;
    }
}

void SickKoala::overDrive(std::string phrase)
{
    std::string::size_type pos = 0;

    while (phrase.find("Kreog!", pos) != std::string::npos)
    {
        phrase.replace(phrase.find("Kreog!"), 6, "1337!");
        pos += 6;
    }
    std::cout << "Mr." << this->name << ": " << phrase << std::endl;
}

std::string SickKoala::getName()
{
    return (this->name);
}