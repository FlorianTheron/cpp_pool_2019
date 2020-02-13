/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** KoalaNurse
*/

#include "KoalaNurse.hpp"

KoalaNurse::KoalaNurse(int id)
{
    this->id = id;
    this->working = false;
}

KoalaNurse::~KoalaNurse()
{
    std::cout << "Nurse " << this->id << ": Finally some rest!" << std::endl;
}

void KoalaNurse::giveDrug(std::string drug, SickKoala *koala)
{
    if (drug.empty() || !koala)
        return;
    koala->takeDrug(drug);
}

std::string KoalaNurse::readReport(std::string filename)
{
    std::ifstream stream(filename);
    std::string line;

    if (!stream.is_open())
        return ("");
    std::getline(stream, line);
    stream.close();
    if (line.empty())
        return ("");
    std::cout << "Nurse " << this->id << ": Kreog! Mr." << filename.substr(0, filename.find(".")) << " needs a " << line << "!" << std::endl;
    return line;
}

void KoalaNurse::timeCheck()
{
    if (!working) {
        working = true;
        std::cout << "Nurse " << this->id << ": Time to get to work!" << std::endl;
    } else {
        working = false;
        std::cout << "Nurse " << this->id << ": Time to go home to my eucalyptus forest!" << std::endl;
    }
}

int KoalaNurse::getID()
{
    return (this->id);
}