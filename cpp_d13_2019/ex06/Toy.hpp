/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** Toy
*/

#ifndef TOY_HPP_
#define TOY_HPP_

#include <iostream>
#include "Picture.hpp"

class Toy
{
    public:
        class Error
        {
            public:
                enum ErrorType
                {
                    UNKNOWN,
                    PICTURE,
                    SPEAK
                };
                Error(ErrorType type = ErrorType::UNKNOWN, std::string what = "", std::string where = "");
                ~Error();
                void setError(ErrorType type = Error::UNKNOWN, std::string what = "", std::string where = "");
                inline std::string what() const { return this->_what; };
                inline std::string where() const { return this->_where; };
                ErrorType type;
            private:
                std::string _what;
                std::string _where;
        };

        enum ToyType
        {
            BASIC_TOY,
            ALIEN,
            BUZZ,
            WOODY
        };

    public:
        Toy();
        Toy(ToyType type, const std::string &name, const std::string &file);
        Toy(const Toy &);
        ~Toy();

        Toy &operator=(const Toy &);
        Toy &operator<<(const std::string &);

        inline ToyType getType() const { return this->_type; };
        inline std::string getName() const { return this->_name; };
        inline void setName(const std::string &name) { this->_name = name; };
        bool setAscii(const std::string &file);
        std::string getAscii() const { return this->_picture.data; };
        virtual bool speak(const std::string &str);
        virtual bool speak_es(const std::string &str);
        Error getLastError();
    protected:
        Error _error;
        ToyType _type;
        std::string _name;
        Picture _picture;

};

std::ostream &operator<<(std::ostream &, const Toy &);

#endif /* !TOY_HPP_ */
