/*
** EPITECH PROJECT, 2020
** cpp_d07a_2019
** File description:
** Parts
*/

#ifndef PARTS_HPP_
#define PARTS_HPP_

#include <iostream>

class Parts
{
    public:
        bool isFunctional() const;
        std::string serial() const;
        void informations() const;
        std::string getType() const;
    protected:
        std::string _serial;
        bool _functional;
        std::string _type;
};

class Arms : public Parts
{
    public:
        Arms(std::string serial = "A-01", bool functional = true);
};

class Legs : public Parts
{
    public:
        Legs(std::string serial = "L-01", bool functional = true);
};

class Head : public Parts
{
    public:
        Head(std::string serial = "H-01", bool functional = true);
};

#endif /* !PARTS_HPP_ */
