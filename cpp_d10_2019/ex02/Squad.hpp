/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Squad
*/

#ifndef SQUAD_HPP_
#define SQUAD_HPP_

#include "ISquad.hpp"
#include <string>
#include <iostream>
#include <vector>

class Squad : public ISquad
{
    public:
        Squad();
        Squad(const Squad &);
        ~Squad();
        int getCount() const;
        ISpaceMarine *getUnit(int);
        int push(ISpaceMarine *);

        Squad &operator=(const Squad &);
    private:
        std::vector<ISpaceMarine *> _units;
};

#endif /* !SQUAD_HPP_ */
