/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** PapaXmasElf
*/

#ifndef PAPAXMASELF_HPP_
#define PAPAXMASELF_HPP_

#include "IElf.hpp"
#include "GiftPaper.hpp"
#include "IConveyorBelt.hpp"
#include "PapaXmasTable.hpp"

class PapaXmasElf : public IElf {
    public:
        PapaXmasElf();
        ~PapaXmasElf();
        void WrapMeThat(Object *);
        Object *openMe(Wrap *);
        void closeMe(Box *);
        std::vector<std::string> look(ITable *);
        void putObject(Object);
        void take(Object);
        ITable *getTable() { return &this->_table; };
        IConveyorBelt *getBelt() const { return this->_belt; };

    private:
        PapaXmasTable _table;
        IConveyorBelt *_belt;
};

#endif /* !PAPAXMASELF_HPP_ */