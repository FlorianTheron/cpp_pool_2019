/*
** EPITECH PROJECT, 2020
** cpp_d07a_2019
** File description:
** KreogCom
*/

#include "KreogCom.hpp"
#include <iterator>

KreogCom::KreogCom(int x, int y, int serial) : m_serial(serial)
{
    this->_x = x;
    this->_y = y;
    this->_next = nullptr;
    std::cout << "KreogCom " << this->m_serial << " initialized" << std::endl;
}

KreogCom::~KreogCom()
{
    std::cout << "KreogCom " << this->m_serial << " shutting down" << std::endl;
}

void KreogCom::addCom(int x, int y, int serial)
{
    KreogCom *newKreog = new(KreogCom)(x, y, serial);

    newKreog->_next = this->_next;
    this->_next = newKreog;
}

KreogCom *KreogCom::getCom()
{
    return (this->_next);
}

void KreogCom::removeCom()
{
    KreogCom *tmp = nullptr;

    if (this->_next)
    {
        tmp = this->_next;
        this->_next = this->_next->_next;
        delete tmp;
    }
}

void KreogCom::ping() const
{
    std::cout << "KreogCom " << this->m_serial << " currently at " << this->_x << " " << this->_y << std::endl;
}

void KreogCom::locateSquad() const
{
    KreogCom *tmp = this->_next;

    while (tmp)
    {
        tmp->ping();
        tmp = tmp->getCom();
    }
    this->ping();
}