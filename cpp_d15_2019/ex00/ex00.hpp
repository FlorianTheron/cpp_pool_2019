/*
** EPITECH PROJECT, 2020
** cpp_d15_2019
** File description:
** ex00
*/

#ifndef EX00_HPP_
#define EX00_HPP_

#include <algorithm>

template<typename T>
void swap(T& a, T& b)
{
    std::swap<T>(a, b);
}

template<typename T>
T min(const T& a, const T& b)
{
    return std::min<T>(a, b);
}

template<typename T>
T max(const T& a, const T& b)
{
    return std::max<T>(a, b);
}

template<typename T>
T add(const T& a, const T& b)
{
    return a + b;
}

#endif /* !EX00_HPP_ */
