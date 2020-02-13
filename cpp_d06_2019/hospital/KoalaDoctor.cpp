/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** KoalaDoctor
*/

#include "KoalaDoctor.hpp"

KoalaDoctor::KoalaDoctor(std::string name)
{
    this->name = name;
    this->working = false;
    std::cout << "Dr." << this->name << ": I'm Dr." << this->name << "! How do you kreog?" << std::endl;
}

KoalaDoctor::~KoalaDoctor()
{
}

void KoalaDoctor::diagnose(SickKoala *koala)
{
    std::string drugs[] = {"Mars", "Buronzand", "Viagra", "Extasy", "Eucalyptus leaf"};
    std::ofstream stream;

    if (!koala)
        return;
    std::cout << "Dr." << this->name << ": So what's goerking you Mr." << koala->getName() << "?" << std::endl;
    koala->poke();
    stream.open(koala->getName() + ".report");
    stream << drugs[random() % 5] << std::endl;
    stream.close();
}

void KoalaDoctor::timeCheck()
{
    if (!working) {
        working = true;
        std::cout << "Dr." << this->name << ": Time to get to work!" << std::endl;
    } else {
        working = false;
        std::cout << "Dr." << this->name << ": Time to go home to my eucalyptus forest!" << std::endl;
    }
}

std::string KoalaDoctor::getName()
{
    return (this->name);
}