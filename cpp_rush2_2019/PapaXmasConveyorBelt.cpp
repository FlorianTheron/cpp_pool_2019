/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** PapaXmasConveyorBelt
*/

#include "PapaXmasConveyorBelt.hpp"
#include "Object.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"
#include "XMLParser.hpp"

PapaXmasConveyorBelt::PapaXmasConveyorBelt()
{
    this->_state = EMPTY;
    this->_button = PENDING;
    this->alternate = false; // false = GP
}

PapaXmasConveyorBelt::~PapaXmasConveyorBelt()
{
}

IConveyorBelt::State const PapaXmasConveyorBelt::getState() const
{
    return (this->_state);
}

IConveyorBelt::Button const PapaXmasConveyorBelt::getButton() const
{
    return (this->_button);
}

void PapaXmasConveyorBelt::pushButtonOut(Object *finalObject)
{
    XMLParser parser;

    if (finalObject == nullptr) {
        std::cerr << "You can't send an invalid gift!" << std::endl;
        return;
    } if (this->_state == FULL) {
        std::cerr << "The ConveyorBelt is already used." << std::endl;
        return;
    }
    parser.WriteFile(finalObject);
    delete finalObject;
    this->_state = EMPTY;
    this->_button = PENDING;
}

Object *PapaXmasConveyorBelt::pushButtonIn()
{
    if (this->_state == FULL) {
        std::cerr << "The ConveyorBelt is already used." << std::endl;
        return (nullptr);
    }
    else {
        std::cout << "IN: clik" << std::endl;
        if (this->alternate == false) {
            this->_state = FULL;
            this->alternate = !this->alternate;
            return (new GiftPaper);
        } else {
            this->_state = FULL;
            this->alternate = !this->alternate;
            return (new Box);
        }
    }
}

IConveyorBelt *PapaXmasConveyorBelt::createConveyorBelt()
{
    PapaXmasConveyorBelt *newConveyor = new PapaXmasConveyorBelt();
    return (newConveyor);
}

const std::vector<Object> PapaXmasConveyorBelt::getObjects() const
{
    return this->_ArrObject;
}

const int PapaXmasConveyorBelt::getNumberObject() const
{
    return this->_ArrObject.size();
}