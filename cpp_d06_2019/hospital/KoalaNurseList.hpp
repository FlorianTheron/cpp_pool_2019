/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** KoalaNurseList
*/

#ifndef KOALANURSELIST_HPP_
#define KOALANURSELIST_HPP_

#include "KoalaNurse.hpp"

class KoalaNurseList {
    public:
        KoalaNurseList(KoalaNurse *koala);
        ~KoalaNurseList();
        bool isEnd();
        void append(KoalaNurseList *koala);
        KoalaNurse *getFromID(int id);
        KoalaNurseList *remove(KoalaNurseList *koala);
        KoalaNurseList *removeFromID(int id);
        void dump();
        KoalaNurse *getContent();
        KoalaNurseList *getNext();
        bool exists(KoalaNurseList *list);
    private:
        KoalaNurse *_node;
        KoalaNurseList *_next;
};

#endif /* !KOALANURSELIST_HPP_ */
