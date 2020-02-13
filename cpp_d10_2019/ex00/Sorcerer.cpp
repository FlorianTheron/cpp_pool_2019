//
// Created by florian on 24/01/2020.
//

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string &name, const std::string &title): _name(name), _title(title) 
{
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

void Sorcerer::polymorph(const Victim &victim) const
{
    victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &stream, const Sorcerer &sorcerer)
{
    return stream << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
}