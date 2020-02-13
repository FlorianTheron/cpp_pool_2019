/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** FruitBox
*/

#ifndef FRUITBOX_HPP_
#define FRUITBOX_HPP_

#include "Fruit.hpp"
#include "FruitNode.hpp"
#include <vector>
#include <list>

class FruitBox {
    public:
        FruitBox(int);
        FruitBox(const FruitBox &) = delete;
        ~FruitBox();
        int nbFruits() const;
        bool putFruit(Fruit *);
        Fruit *pickFruit();
        FruitNode *head() const;
        std::vector<FruitNode> getFruits() const { return this->_fruits; };

    private:
        std::vector<FruitNode> _fruits;
        int _size;
};

#endif /* !FRUITBOX_HPP_ */
