/*
** EPITECH PROJECT, 2020
** cpp_d14a_2019
** File description:
** SimplePtr
*/

#include "SimplePtr.hpp"

SimplePtr::SimplePtr(BaseComponent *rawPtr)
{
    this->_rawPtr = rawPtr;
}

SimplePtr::~SimplePtr()
{
    delete(_rawPtr);
}

SimplePtr::SimplePtr(SimplePtr const &ptr)
{
    this->_rawPtr = ptr._rawPtr;
}

SimplePtr &SimplePtr::operator=(SimplePtr const &ptr)
{
    this->_rawPtr = ptr._rawPtr;
    return (*this);
}
