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

FruitBox *const *LittleHand::organizeCoconut(Coconut const* const *coconuts)
{
    if (!coconuts)
        return nullptr;
    size_t i = 0;
    for (i = 0; coconuts[i]; i += 1);
    int coconut_nbr = i / 6;
    int rest = i % 6;
    FruitBox **fruitBoxes = new FruitBox*[coconut_nbr + 2]{nullptr};
    for (int x = 0; x <= coconut_nbr; x += 1)
    {
        fruitBoxes[x] = new FruitBox(6);
        if (x < coconut_nbr)
        {
            while (fruitBoxes[x]->putFruit(new Coconut));
        }
        else
        {
            for (int y = 0; y < rest; y += 1)
                fruitBoxes[x]->putFruit(new Coconut);
        }
        
    }
    return fruitBoxes;
}