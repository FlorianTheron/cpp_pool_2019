/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** PapaXmasConveyorBelt
*/

#ifndef PapaXmasConveyorBelt_HPP_
#define PapaXmasConveyorBelt_HPP_

#include "Object.hpp"
#include "IConveyorBelt.hpp"

class PapaXmasConveyorBelt: public IConveyorBelt {
    public:
        PapaXmasConveyorBelt();
        ~PapaXmasConveyorBelt();
        IConveyorBelt *createConveyorBelt();
        const std::vector<Object> getObjects() const;
        const int getNumberObject() const;
        State const getState() const;
        Button const getButton() const;
        void pushButtonOut(Object*);
        Object *pushButtonIn();
    private:
        std::vector<Object> _ArrObject;
        State _state;
        Button _button;
        bool alternate;
};

#endif /* !PapaXmasConveyorBelt_HPP_ */
