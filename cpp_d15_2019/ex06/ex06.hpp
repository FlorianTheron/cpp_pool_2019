/*
** EPITECH PROJECT, 2020
** cpp_d15_2019
** File description:
** ex06
*/

#ifndef EX06_HPP_
#define EX06_HPP_

#include <iostream>

template<typename A, typename B>
struct Tuple {
    A a;
    B b;

    std::string toString()
    {
        std::string dump;

        dump.append("[TUPLE [");
        dump.append(std::string(typeid(A).name()));
        return dump;
    }
};

#endif /* !EX06_HPP_ */
