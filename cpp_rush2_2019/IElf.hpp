/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** IElf
*/

#ifndef IELF_HPP_
#define IELF_HPP_

#include "Object.hpp"
#include "Wrap.hpp"
#include "Box.hpp"
#include "IConveyorBelt.hpp"

class ITable;

class IElf {
    public:
        virtual ~IElf() {};
        virtual void WrapMeThat(Object *) = 0;
        virtual Object *openMe(Wrap *) = 0;
        virtual void closeMe(Box *) = 0;
        virtual std::vector<std::string> look(ITable *) = 0;
        virtual void putObject(Object) = 0;
        virtual void take(Object) = 0;
        virtual  ITable *getTable() = 0;
        virtual IConveyorBelt *getBelt() const = 0;

    protected:
        Object *_object;
};

#endif /* !IELF_HPP_ */
