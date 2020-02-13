/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** FruitBox
*/

#include "FruitBox.hpp"
#include <iostream>

FruitNode buff;

FruitBox::FruitBox(int size)
{
    if (size <= 0)
        size = 0;
    this->_size = size;
}

FruitBox::~FruitBox()
{
    this->_fruits.clear();
}

int FruitBox::nbFruits() const
{
    return this->_fruits.size();
}

bool FruitBox::putFruit(Fruit *fruit)
{
    if (this->_fruits.size() >= static_cast<size_t>(this->_size))
        return false;
    if (fruit == nullptr)
        return false;

    for (auto elem : this->_fruits)
    {
        if (elem._current == fruit)
            return false;
    }

    this->_fruits.push_back({fruit, nullptr});
    if (this->_fruits.size() > 1)
    {
        (this->_fruits.end() - 2)->next = new FruitNode{fruit, nullptr};
    }
  
    return true;
}

Fruit *FruitBox::pickFruit()
{
    if (this->nbFruits() <= 0)
    {
        return (nullptr);
    }
    Fruit *buff = this->_fruits.at(0)._current;

    this->_fruits.erase(this->_fruits.begin());
    return buff;
}

FruitNode *FruitBox::head() const
{
    if (this->nbFruits() <= 0)
    {
        return (nullptr);
    }
    buff = this->_fruits[0];
    return &buff;
}