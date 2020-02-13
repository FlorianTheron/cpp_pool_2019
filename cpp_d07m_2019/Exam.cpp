/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** Exam
*/

#include "Exam.hpp"

bool Exam::cheat = false;

Exam::Exam(bool *c)
{
    cheat = (*c);
}

void Exam::start(unsigned int nbr)
{
    std::cout << "[The exam is starting]" << std::endl;
    std::cout << nbr << " Klingon vessels appeared out of nowhere." << std::endl
    << "they are fully armed and shielded" << std::endl;
    if (!cheat)
    {
        std::cout << "This exam is hard... you lost again." << std::endl;
    }
    else
    {
        std::cout << "What the... someone changed the parameters of the exam !" << std::endl;
    }
    
}

bool Exam::isCheating()
{
    return (this->cheat);
}

Exam::~Exam()
{

}
