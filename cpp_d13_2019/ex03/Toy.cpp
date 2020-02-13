/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** Toy
*/

#include "Toy.hpp"

Toy::Toy() : _type(BASIC_TOY)
{
    this->_name = "toy";
    this->_picture.data = "";
}

Toy::Toy(Toy::ToyType type, const std::string &name, const std::string &file) : _type(type)
{
    this->_name = name;
    this->_picture = Picture(file);
}

Toy::Toy(const Toy &toy) : _type(toy._type)
{
    this->_name = toy._name;
    this->_picture = toy._picture;
}

Toy &Toy::operator=(const Toy &toy)
{
    this->_type = toy._type;
    this->_name = toy._name;
    this->_picture = toy._picture;
    return (*this);
}

Toy::~Toy()
{
}

bool Toy::setAscii(const std::string &file)
{
    return this->_picture.getPictureFromFile(file);
}

void Toy::speak(const std::string &str)
{
    std::cout << this->_name << " \"" << str << "\"" << std::endl;
}