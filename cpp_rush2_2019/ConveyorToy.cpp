 /*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** ConveyorToy
*/

#include "ConveyorToy.hpp"

ConveyorToy::ConveyorToy()
{
    this->_state = EMPTY;
    this->_button = PENDING;
    this->_toy_required = 20;
    this->_Max_ConvertToy = 0;
}


ConveyorToy::~ConveyorToy()
{

}

IConveyorBelt::Button const ConveyorToy::getButton() const
{
    return (this->_button);
}

IConveyorBelt::State const ConveyorToy::getState() const
{
    return (this->_state);
}

std::ostream &operator<<(std::ostream &os, ConveyorToy &conveyor)
{
    int addToy = rand() % 10 + 2;
    conveyor.setRequired(addToy);
    os << "ELFS ! We need to deliver " << addToy << " more gifts, toys will be available on the ConveyorToy" << std::endl;
    return (os);
}

void ConveyorToy::setRequired(int addToy)
{
    this->_toy_required += addToy;
}

IConveyorBelt *ConveyorToy::createConveyorBelt()
{
    if (this->_Max_ConvertToy < 1) {
        ConveyorToy *newConveyorToy;
        this->_Max_ConvertToy += 1;
        return (newConveyorToy);
    }
    return (nullptr);
}

void ConveyorToy::pushButton(std::string state)
{
    if (state.compare("IN") == 0) {
        if (this->_state == FULL) {
            std::cerr << "The ConveyorToy is already used." << std::endl;
            return;
        } 
        if (this->_toy_required <= 0) {
            std::cerr << "There are no more toys coming from factory Elfs!" << std::endl;
            return;
        }
        else {
            this->_state = FULL;
            this->_toy_required -= 1;
        }
    }
    else if (state.compare("OUT") == 0) {
        std::cerr << "The ConveyorToy can't send Gifts." << std::endl;
        return;
    }
}