/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** PapaXmasTable
*/

#include "PapaXmasTable.hpp"
#include "LittlePony.hpp"
#include "GiftPaper.hpp"
#include "Teddy.hpp"
#include "Box.hpp"

PapaXmasTable::PapaXmasTable()
{
    this->_ArrObject.push_back(Teddy("Bear"));
    this->_ArrObject.push_back(LittlePony("Pony"));
    this->_ArrObject.push_back(Teddy("Bear2"));
    this->_ArrObject.push_back(Box());
    this->_ArrObject.push_back(Box());
    this->_ArrObject.push_back(Box());
    this->_ArrObject.push_back(Box());
    this->_ArrObject.push_back(GiftPaper());
    this->_ArrObject.push_back(GiftPaper());
    this->_ArrObject.push_back(GiftPaper());
}

PapaXmasTable::~PapaXmasTable()
{
}

ITable* PapaXmasTable::createTable()
{
    PapaXmasTable *table = new PapaXmasTable();
    return (table);
}

const int PapaXmasTable::getNumberObject() const
{
    return (this->_ArrObject.size());
}

std::vector<Object> &PapaXmasTable::getObjects()
{
    return this->_ArrObject;
}

void PapaXmasTable::pushObject(Object obj)
{
    this->_ArrObject.push_back(obj);
}