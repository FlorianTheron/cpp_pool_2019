/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** KoalaDoctorList
*/

#include "KoalaDoctorList.hpp"

KoalaDoctorList::KoalaDoctorList(KoalaDoctor *koala)
{
    this->_node = koala;
    this->_next = nullptr;
}

KoalaDoctorList::~KoalaDoctorList()
{
}

bool KoalaDoctorList::isEnd()
{
    return (this->_next == nullptr || this->_next == NULL);
}

void KoalaDoctorList::append(KoalaDoctorList *koala)
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

bool KoalaDoctorList::exists(KoalaDoctorList *list)
{
    if (this == nullptr)
        return (false);
    if (this == list || this->_node->getName().compare(list->getContent()->getName()) == 0)
        return (true);
    return (this->_next->exists(list));
}

KoalaDoctor *KoalaDoctorList::getFromName(std::string name)
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

KoalaDoctorList *KoalaDoctorList::remove(KoalaDoctorList *koala)
{
    KoalaDoctorList *tmp = this;

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

KoalaDoctorList *KoalaDoctorList::removeFromName(std::string name)
{
    KoalaDoctorList *tmp = this;

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

KoalaDoctor *KoalaDoctorList::getContent()
{
    return (this->_node);
}

KoalaDoctorList *KoalaDoctorList::getNext()
{
    return (this->_next);
}

void KoalaDoctorList::dump()
{
    KoalaDoctorList *cpy = this;

    if (cpy == nullptr)
        return;
    std::cout << "Doctors: ";
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