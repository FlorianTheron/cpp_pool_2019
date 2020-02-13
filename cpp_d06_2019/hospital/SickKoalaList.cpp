/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** SickKoalaList
*/

#include "SickKoalaList.hpp"

SickKoalaList::SickKoalaList(SickKoala *koala)
{
    this->_node = koala;
    this->_next = nullptr;
}

SickKoalaList::~SickKoalaList()
{
}

bool SickKoalaList::isEnd()
{
    return (this->_next == nullptr);
}

void SickKoalaList::append(SickKoalaList *koala)
{
    if (this == koala)
        return;
    if (this->isEnd())
    {
        this->_next = koala;
        return;
    }
    return (this->_next->append(koala));
}

bool SickKoalaList::exists(SickKoalaList *list)
{
    if (this == nullptr || !list)
        return (false);
    if (this == list || this->_node->getName() == list->getContent()->getName())
        return (true);
    return (this->_next->exists(list));
}

SickKoala *SickKoalaList::getFromName(std::string name)
{
    if (this == nullptr)
        return (nullptr);
    if (this->_node != nullptr)
    {
        if (this->_node->getName().compare(name) == 0)
            return (this->_node);
    }
    if (this->_next != nullptr)
        return (this->_next->getFromName(name));
    else
        return (nullptr);
}

SickKoalaList *SickKoalaList::remove(SickKoalaList *koala)
{
    SickKoalaList *tmp = this;

    while (!tmp->isEnd())
    {
        if (tmp == koala)
        {
            *(tmp) = *(tmp->_next);
            return (this);
        }
        tmp = tmp->_next;
    }
    return (nullptr);
}

SickKoalaList *SickKoalaList::removeFromName(std::string name)
{
    SickKoalaList *tmp = this;

    while (!tmp->isEnd())
    {
        if (tmp->_node->getName().compare(name) == 0)
        {
            *(tmp) = *(tmp->_next);
            return (this);
        }
        tmp = tmp->_next;
    }
    return (nullptr);
}

SickKoala *SickKoalaList::getContent()
{
    return (this->_node);
}

SickKoalaList *SickKoalaList::getNext()
{
    return (this->_next);
}

void SickKoalaList::dump()
{
    SickKoalaList *cpy = this;

    if (cpy == nullptr)
        return;
    std::cout << "Patients: ";
    while (cpy != nullptr)
    {
        if (cpy->_next == nullptr)
        {
            if (cpy->_node == nullptr)
                std::cout << "[nullptr]" << "." << std::endl;
            else
                std::cout << cpy->_node->getName() << "." << std::endl;
        }
        else
        {
            if (cpy->_node == nullptr)
                std::cout << "[nullptr]" << ", ";
            else
                std::cout << cpy->_node->getName() << ", ";
        }
        cpy = cpy->_next;
    }
}