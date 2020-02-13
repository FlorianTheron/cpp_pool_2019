/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** PapaXmasElf
*/

#include "PapaXmasElf.hpp"
#include "PapaXmasTable.hpp"
#include "PapaXmasConveyorBelt.hpp"

PapaXmasElf::PapaXmasElf()
{
    this->_table.createTable();
    this->_belt = new PapaXmasConveyorBelt();
}

PapaXmasElf::~PapaXmasElf()
{
}

void PapaXmasElf::WrapMeThat(Object* object)
{

}

Object* PapaXmasElf::openMe(Wrap* wrap)
{
    if (wrap->getType().compare("Box") == 0)
    {
        return ((Box *)wrap)->openMe();
    }
    else if (wrap->getType().compare("GiftPaper") == 0)
    {
        return ((GiftPaper *)wrap)->openMe();
    }
}

void PapaXmasElf::closeMe(Box* box)
{
    box->closeMe();
}

std::vector<std::string> PapaXmasElf::look(ITable* table)
{
    std::vector<std::string> types;

    for (auto item : table->getObjects())
    {
        types.push_back(item.getType());
    }
    return (types);
}

void PapaXmasElf::putObject(Object object)
{
    if (this->_table.getObjects().size() == 10)
    {
        // Table collapse.
    }
    else
    {
        this->_table.pushObject(object);
    }
}

void PapaXmasElf::take(Object object)
{
    int idx = 0;

    bool find = false;
    for (auto &elem : this->_table.getObjects())
    {
        if (elem.getType().compare(object.getType()) == 0 && !find)
        {
            std::vector<Object> new_vec;

            int c = 0;
            for (auto elem : this->getTable()->getObjects())
            {
                if (c != idx)
                    new_vec.push_back(elem);
                c++;
            }
            
            this->_table.getObjects().clear();

            for (auto elem : new_vec)
            {
                this->_table.getObjects().push_back(elem);
            }

            find = true;
        }
        idx++;
    }
}