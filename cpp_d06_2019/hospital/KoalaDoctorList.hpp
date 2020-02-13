/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** KoalaDoctorList
*/

#ifndef KOALADOCTORLIST_HPP_
#define KOALADOCTORLIST_HPP_

#include "KoalaDoctor.hpp"

class KoalaDoctorList {
    public:
        KoalaDoctorList(KoalaDoctor *koala);
        ~KoalaDoctorList();
        bool isEnd();
        void append(KoalaDoctorList *koala);
        KoalaDoctor *getFromName(std::string name);
        KoalaDoctorList *remove(KoalaDoctorList *koala);
        KoalaDoctorList *removeFromName(std::string name);
        KoalaDoctor *getContent();
        KoalaDoctorList *getNext();
        bool exists(KoalaDoctorList *list);
        void dump();
    private:
        KoalaDoctor *_node;
        KoalaDoctorList *_next;
};


#endif /* !KOALADOCTORLIST_HPP_ */
