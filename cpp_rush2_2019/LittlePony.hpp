/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** LittlePony
*/

#ifndef LITTLEPONY_HPP_
#define LITTLEPONY_HPP_

#include "Toy.hpp"

class LittlePony : public Toy {
    public:
        LittlePony(const std::string &title);
        ~LittlePony();
        void isTaken();
    private:
        const std::string _type;
};

#endif /* !LITTLEPONY_HPP_ */
