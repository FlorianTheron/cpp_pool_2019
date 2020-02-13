/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** KoalaNurseList
*/
#include "KoalaNurseList.hpp"

KoalaNurseList::KoalaNurseList(KoalaNurse *koala)
{
    this->_node = koala;
    this->_next = nullptr;
}

KoalaNurseList::~KoalaNurseList()
{
}

bool KoalaNurseList::isEnd()
{
    return (this->_next == nullptr);
}

void KoalaNurseList::append(KoalaNurseList *koala)
{
    if (this == koala || !koala)
        return;
    if (this->isEnd())
    {
        this->_next = koala;
        return;
    }
    return (this->_next->append(koala));
}

bool KoalaNurseList::exists(KoalaNurseList *list)
{
    if (this == nullptr)
        return (false);
    if (this == list || this->_node->getID() == list->getContent()->getID())
        return (true);
    return (this->_next->exists(list));
}

KoalaNurse *KoalaNurseList::getFromID(int id)
{
    if (this == nullptr)
        return (nullptr);
    if (this->_node != nullptr)
    {
        if (this->_node->getID() == id)
            return (this->_node);
    }
    if (this->_next != nullptr)
        return (this->_next->getFromID(id));
    else
        return (nullptr);
}

KoalaNurseList *KoalaNurseList::remove(KoalaNurseList *koala)
{
    KoalaNurseList *tmp = this;

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

KoalaNurseList *KoalaNurseList::removeFromID(int id)
{
    KoalaNurseList *tmp = this;

    while (!tmp->isEnd())
    {
        if (tmp->_node->getID() == id)
        {
            *(tmp) = *(tmp->_next);
            return (this);
        }
        tmp = tmp->_next;
    }
    return (nullptr);
}

KoalaNurse *KoalaNurseList::getContent()
{
    return (this->_node);
}

KoalaNurseList *KoalaNurseList::getNext()
{
    return (this->_next);
}

void KoalaNurseList::dump()
{
    KoalaNurseList *cpy = this;

    if (cpy == nullptr)
        return;
    std::cout << "Nurses: ";
    while (cpy != nullptr)
    {
        if (cpy->_next == nullptr)
        {
            if (cpy->_node == nullptr)
                std::cout << "[nullptr]" << "." << std::endl;
            else
                std::cout << cpy->_node->getID() << "." << std::endl;
        }
        else
        {
            if (cpy->_node == nullptr)
                std::cout << "[nullptr]" << ", ";
            else
                std::cout << cpy->_node->getID() << ", ";
        }
        cpy = cpy->_next;
    }
}
