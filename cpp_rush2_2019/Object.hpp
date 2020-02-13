/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Object
*/

#ifndef OBJECT_HPP_
#define OBJECT_HPP_

#include <string>
#include <iostream>
#include <fstream>
#include <memory>
#include <cstring>
#include <vector>

class Object {
    public:
        Object();
        Object(const std::string &type);
        virtual ~Object();
        inline const std::string getType() const { return this->_type; };
    protected:
        const std::string _type;
};

Object **MyUnitTests();
Object *MyUnitTests(Object **objects);

#endif /* !OBJECT_HPP_ */
