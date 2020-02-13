/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** IConveyorBelt
*/

#ifndef IConveyorBelt_HPP_
#define IConveyorBelt_HPP_

#include <vector>
#include <iostream>
#include <string>

class IConveyorBelt {
    public:
        enum State {
            EMPTY,
            FULL,
        };
        enum Button{
            IN,
            OUT,
            PENDING,
        };
        public:
            virtual ~IConveyorBelt() {}
            virtual IConveyorBelt *createConveyorBelt() = 0;
            virtual const State getState() const = 0;
            virtual const Button getButton() const = 0;
        protected:
            bool alternate;
};

#endif /* !IConveyorBelt_HPP_ */
