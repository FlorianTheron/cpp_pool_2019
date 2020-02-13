/*
** EPITECH PROJECT, 2020
** cpp_d17_2019
** File description:
** find
*/

#ifndef FIND_HPP_
#define FIND_HPP_

#include <algorithm>
#include <vector>

template<typename T>
typename T::iterator do_find(T& container, int i)
{
    return std::find(container.begin(), container.end(), i);
}

#endif /* !FIND_HPP_ */
