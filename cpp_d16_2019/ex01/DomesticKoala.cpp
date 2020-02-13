/*
** EPITECH PROJECT, 2020
** Piscine C++
** File description:
** DomesticKoala
*/

#include "DomesticKoala.hpp"

DomesticKoala::DomesticKoala(KoalaAction &action)
{
    this->_koalaAction = action;
}

DomesticKoala::~DomesticKoala()
{
}

DomesticKoala::DomesticKoala(const DomesticKoala &domestic)
{
    this->_commands = domestic._commands;
}

DomesticKoala &DomesticKoala::operator=(const DomesticKoala &domestic)
{
    this->_commands = domestic._commands;
    return *this;
}

const std::vector<methodPointer_t> *DomesticKoala::getActions() const
{
    std::vector<methodPointer_t> *_methods = new std::vector<methodPointer_t>;

    for (auto item : this->_commands)
    {
        _methods->push_back(item.second);
    }
    return (_methods);
}

void DomesticKoala::learnAction(unsigned char command, methodPointer_t action)
{
    this->_commands.insert({command, action});
}

void DomesticKoala::unlearnAction(unsigned char command)
{
    this->_commands.erase(command);
}

void DomesticKoala::setKoalaAction(KoalaAction &action)
{
    this->_commands.clear();
    this->_koalaAction = action;
}

void DomesticKoala::doAction(unsigned char command, const std::string &param)
{
    for (auto item : _commands)
    {
        if (item.first == command)
        {
            (this->_koalaAction.*item.second)(param);
        }
    }
}