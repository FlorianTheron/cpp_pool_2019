/*
** EPITECH PROJECT, 2020
** cpp_d15_2019
** File description:
** ex01
*/

#ifndef EX01_HPP_
#define EX01_HPP_

#include <string>
#include <algorithm>

template<typename T>
int compare(const T& a, const T& b)
{
    if (a == b)
        return 0;
    else if (a > b)
        return 1;
    else
        return -1;
}

#endif /* !EX01_HPP_ */
