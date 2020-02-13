/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** Picture
*/

#include "Picture.hpp"
#include <iostream>

Picture::Picture()
{
    this->data = "";
}

Picture::Picture(const std::string &file)
{
    getPictureFromFile(file);
}

Picture::Picture(const Picture &picture)
{
    this->data = picture.data;
}

Picture::~Picture()
{
}

Picture &Picture::operator=(const Picture &picture)
{
    this->data = picture.data;
    return (*this);
}

bool Picture::getPictureFromFile(const std::string &file)
{
    std::ifstream reader(file);
    std::string line;

    this->data.clear();
    try
    {
        while(std::getline(reader, line))
        {
            this->data += line + "\n";
        }
    }
    catch(const std::exception& e)
    {
        this->data = "ERROR";
        return (false);
    }

    if (this->data.empty())
    {
        this->data = "ERROR";
        return (false);
    }
    return (true);
}
