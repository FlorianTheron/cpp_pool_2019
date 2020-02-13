/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** PapaXmasTable
*/

#ifndef PAPAXMASTABLE_HPP_
#define PAPAXMASTABLE_HPP_

#include "ITable.hpp"

class PapaXmasTable : public ITable {
    public:
        PapaXmasTable();
        ~PapaXmasTable();
        ITable *createTable();
        std::vector<Object> &getObjects();
        const int getNumberObject() const;
        void pushObject(Object);
    protected:
        std::vector<Object> _ArrObject;
};

#endif /* !PAPAXMASTABLE_HPP_ */
