/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** ITable
*/

#ifndef ITABLE_HPP_
#define ITABLE_HPP_

#include <vector>
#include "Object.hpp"

class ITable {
    public:
        virtual ~ITable() {};
        virtual ITable *createTable() = 0;
        virtual const int getNumberObject() const = 0;
        virtual std::vector<Object> &getObjects() = 0;
        virtual void pushObject(Object) = 0;
};

#endif /* !ITABLE_HPP_ */
