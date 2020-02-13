/*
** EPITECH PROJECT, 2020
** cpp_d15_2019
** File description:
** ex02
*/

#ifndef EX02_HPP_
#define EX02_HPP_

#include <iostream>
#include <algorithm>

template<typename T>
T min(const T& a, const T& b)
{
    std::cout << "template min" << std::endl;
    return std::min<T>(a, b);
}

int min(int a, int b)
{
    std::cout << "non-template min" << std::endl;
    return std::min<int>(a, b);
}

template<typename T>
T templateMin(const T a[], int size)
{
    T minValue = a[0];

    for (int i = 1; i < size; i += 1)
    {
        minValue = min<T>(a[i], minValue);
    }
    return (minValue);
}

int nonTemplateMin(int a[], int size)
{
    int minValue = a[0];

    for (int i = 1; i < size; i += 1)
    {
        minValue = min(a[i], minValue);
    }
    return (minValue);
}

#endif /* !EX02_HPP_ */
