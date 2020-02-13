/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** Picture
*/

#ifndef PICTURE_HPP_
#define PICTURE_HPP_

#include <string>
#include <fstream>

class Picture {
    public:
        Picture();
        Picture(const std::string &file);
        Picture(const Picture &);
        ~Picture();
        bool getPictureFromFile(const std::string &file);

        Picture &operator=(const Picture &);

        std::string data;
};

#endif /* !PICTURE_HPP_ */
