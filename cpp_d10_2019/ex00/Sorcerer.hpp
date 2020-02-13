//
// Created by florian on 24/01/2020.
//

#ifndef SORCERER_H
#define SORCERER_H

#include <string>
#include <iostream>
#include <fstream>
#include "Victim.hpp"

class Sorcerer
{
    public:
        Sorcerer(const std::string &name, const std::string &title);

        ~Sorcerer();

        void polymorph(const Victim &) const;

        inline std::string getName() const
        { return this->_name; };

        inline std::string getTitle() const
        { return this->_title; };
    private:
        const std::string _name;
        const std::string _title;
};

std::ostream &operator<<(std::ostream &, const Sorcerer &);

#endif //CPP_D10_2019_SORCERER_H
