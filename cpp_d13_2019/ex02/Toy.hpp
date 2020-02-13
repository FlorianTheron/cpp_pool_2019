/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** Toy
*/

#ifndef TOY_HPP_
#define TOY_HPP_

#include "Picture.hpp"

class Toy {
    public:
        enum ToyType
        {
            BASIC_TOY,
            ALIEN,
            BUZZ,
            WOODY
        };
        Toy();
        Toy(ToyType type, const std::string &name, const std::string &file);
        Toy(const Toy &);
        ~Toy();

        Toy &operator=(const Toy &);

        inline ToyType getType() const { return this->_type; };
        inline std::string getName() const { return this->_name; };
        inline void setName(const std::string &name) { this->_name = name; };
        bool setAscii(const std::string &file);
        std::string getAscii() const { return this->_picture.data; };
    protected:
        ToyType _type;
        std::string _name;
        Picture _picture;
};

#endif /* !TOY_HPP_ */
