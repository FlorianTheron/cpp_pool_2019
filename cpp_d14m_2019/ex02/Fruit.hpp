/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** Fruit
*/

#ifndef FRUIT_HPP_
#define FRUIT_HPP_

#include <string>

class Fruit
{
    public:
        Fruit(const std::string &name = "", const int &vitamins = 0);
        virtual ~Fruit();
        virtual std::string getName() const;
        virtual int getVitamins() const;
    protected:
        const std::string _name;
        int _vitamins;
};

#endif /* !FRUIT_HPP_ */
