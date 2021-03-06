/*
** EPITECH PROJECT, 2020
** Piscine C++
** File description:
** DomesticKoala
*/

#ifndef DOMESTICKOALA_HPP_
#define DOMESTICKOALA_HPP_

#include <string>
#include <vector>
#include <map>
#include "KoalaAction.hpp"

using methodPointer_t = void (KoalaAction::*)(const std::string &);

class DomesticKoala
{
    public:
        DomesticKoala(KoalaAction &);
        ~DomesticKoala();
        DomesticKoala (const DomesticKoala &);
        DomesticKoala &operator=(const DomesticKoala &);
        const std::vector<methodPointer_t> *getActions() const;
        void learnAction(unsigned char command, methodPointer_t action);
        void unlearnAction(unsigned char command);
        void doAction(unsigned char command, const std::string &param);
        void setKoalaAction(KoalaAction &);
    private:
        KoalaAction _koalaAction;
        std::map<unsigned char, methodPointer_t> _commands;
};

#endif /* !DOMESTICKOALA_HPP_ */
