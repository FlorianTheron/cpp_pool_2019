/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Victim
*/

#ifndef VICTIM_HPP_
#define VICTIM_HPP_

#include <string>
#include <iostream>
#include <fstream>

class Victim {
    public:
        Victim(const std::string &name);
        ~Victim();

        virtual void getPolymorphed() const;

    protected:
        const std::string _name;
};

std::ostream &operator<<(std::ostream &, const Victim &);

#endif /* !VICTIM_HPP_ */
