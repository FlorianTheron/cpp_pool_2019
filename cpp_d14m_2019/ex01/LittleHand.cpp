/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** LittleHand
*/

#include "LittleHand.hpp"
#include "Lemon.hpp"
#include "Lime.hpp"
#include "Banana.hpp"
#include <iostream>

void LittleHand::sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes)
{
    for (auto fruit : unsorted.getFruits())
    {
        if (typeid(*fruit._current).hash_code() == typeid(Lemon).hash_code())
        {
            if (lemons.putFruit(fruit._current))
                unsorted.pickFruit();
        }
        else if (typeid(*fruit._current).hash_code() == typeid(Lime).hash_code())
        {
            if (limes.putFruit(fruit._current))
                unsorted.pickFruit();
        }
        else if (typeid(*fruit._current).hash_code() == typeid(Banana).hash_code())
        {
            if (bananas.putFruit(fruit._current))
                unsorted.pickFruit();
        }
    }
}