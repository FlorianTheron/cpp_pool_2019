/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Toy
*/

#ifndef TOY_HPP_
#define TOY_HPP_

#include "Object.hpp"

class Toy : public Object {
    public:
        enum ToyStatus
        {
            NOT_WRAPPED,
            WRAPPED
        };
    public:
        Toy(const std::string &title, const std::string &type);
        ~Toy();
        virtual void isTaken();

        inline const std::string getTitle() const { return this->_title; };
        inline ToyStatus getStatus() const { return this->_status; };
    protected:
        const std::string _title;
        ToyStatus _status;
};

#endif /* !TOY_HPP_ */
