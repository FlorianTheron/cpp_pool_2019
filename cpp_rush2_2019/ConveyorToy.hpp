/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** ConveyorToy
*/

#ifndef CONVEYORTOY_HPP_
#define CONVEYORTOY_HPP_

#include "IConveyorBelt.hpp"
#include <ostream>

class ConveyorToy : public IConveyorBelt {
    public:
        ConveyorToy();
        ~ConveyorToy();
        IConveyorBelt *createConveyorBelt();
        Button const getButton() const;
        State const getState() const;
        void pushButton(std::string state);
        void setRequired(int);
    protected:
        State _state;
        Button _button;
        int _toy_required;
        int _Max_ConvertToy = 0;
    private:
};

std::ostream &operator<<(std::ostream &, ConveyorToy &);

#endif /* !CONVEYORTOY_HPP_ */