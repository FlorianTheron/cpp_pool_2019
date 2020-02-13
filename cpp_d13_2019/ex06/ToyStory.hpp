/*
** EPITECH PROJECT, 2020
** cpp_d13_2019
** File description:
** ToyStory
*/

#ifndef TOYSTORY_HPP_
#define TOYSTORY_HPP_

#include <string>
#include "Toy.hpp"

class ToyStory {
    public:
        static void tellMeAStory(std::string, Toy &, bool (Toy::*)(const std::string&), Toy &, bool (Toy::*)(const std::string&));
};

#endif /* !TOYSTORY_HPP_ */
