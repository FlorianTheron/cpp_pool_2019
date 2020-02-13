/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Box
*/

#include "Box.hpp"

Box::Box() : Wrap("Box")
{
    this->_state = OPEN;
    this->_content = EMPTY;
}

void Box::wrapMeThat(Toy* toy)
{
    if (this->_state == OPEN && this->_content == EMPTY)
    {
        this->_object = toy;
        this->_content = Wrap::FULL;
    }
    else
    {
        std::cerr << "Cannot Wrap this object, box is either closed or full." << std::endl;
    }
}

Object* Box::openMe()
{
    this->_state = OPEN;
    this->_content = EMPTY;
    if (this->_object == nullptr)
        std::cerr << "Box is empty." << std::endl;
    return this->getObject();
}