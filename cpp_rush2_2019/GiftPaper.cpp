/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** GiftPaper
*/

#include "GiftPaper.hpp"

GiftPaper::GiftPaper() : Wrap("GiftPaper")
{
    this->_content = EMPTY;
    this->_object = nullptr;
}

GiftPaper::~GiftPaper()
{
}

void GiftPaper::wrapMeThat(Box* box)
{
    if (this->_content == EMPTY)
    {
        this->_object = box;
        this->_content = FULL;
    }
    else
    {
        std::cerr << "Gift paper already full." << std::endl;
    }
}

Object* GiftPaper::openMe()
{
    this->_content = EMPTY;
    return this->getObject();
}