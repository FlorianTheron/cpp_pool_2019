/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** SickKoalaList
*/

#ifndef SICKKOALALIST_HPP_
#define SICKKOALALIST_HPP_

#include "SickKoala.hpp"

class SickKoalaList {
    public:
        SickKoalaList(SickKoala *koala);
        ~SickKoalaList();
        bool isEnd();
        void append(SickKoalaList *koala);
        SickKoala *getFromName(std::string name);
        SickKoalaList *remove(SickKoalaList *koala);
        SickKoalaList *removeFromName(std::string name);
        SickKoala *getContent();
        SickKoalaList *getNext();
        bool exists(SickKoalaList *list);
        void dump();
    private:
        SickKoala *_node;
        SickKoalaList *_next;
};

#endif /* !SICKKOALALIST_HPP_ */
