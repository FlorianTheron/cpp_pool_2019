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
    this->_error = Error(Error::UNKNOWN, "", "");
}

Toy::Toy(Toy::ToyType type, const std::string &name, const std::string &file) : _type(type)
{
    this->_name = name;
    this->_picture = Picture(file);
    this->_error.setError();
}

Toy::Toy(const Toy &toy) : _type(toy._type)
{
    this->_name = toy._name;
    this->_picture = toy._picture;
    this->_error.setError();
}

Toy &Toy::operator=(const Toy &toy)
{
    this->_type = toy._type;
    this->_name = toy._name;
    this->_picture = toy._picture;
    this->_error = toy._error;
    return (*this);
}

Toy::~Toy()
{
}

bool Toy::setAscii(const std::string &file)
{
    if (this->_picture.getPictureFromFile(file) == false)
    {
        this->_error.setError(Error::PICTURE, "bad new illustration", "setAscii");
        return (false);
    }
    return (true);
}

bool Toy::speak(const std::string &str)
{
    std::cout << this->_name << " \"" << str << "\"" << std::endl;
    return (true);
}

Toy &Toy::operator<<(const std::string &str)
{
    this->_picture.data = str;
    return (*this);
}

bool Toy::speak_es(__attribute__((unused)) const std::string &str)
{
    this->_error.setError(Error::SPEAK, "wrong mode", "speak_es");
    return (false);
}

std::ostream &operator<<(std::ostream &stream, const Toy &toy)
{
    return stream << toy.getName() << std::endl << toy.getAscii() << std::endl;
}

Toy::Error::Error(ErrorType type, std::string what, std::string where)
{
    this->type = type;
    this->_what = what;
    this->_where = where;
}

void Toy::Error::setError(ErrorType type, std::string what, std::string where)
{
    this->type = type;
    this->_what = what;
    this->_where = where;
}

Toy::Error::~Error()
{
}

Toy::Error Toy::getLastError()
{
    return this->_error;
}