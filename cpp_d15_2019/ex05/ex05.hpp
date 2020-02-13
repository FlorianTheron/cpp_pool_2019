/*
** EPITECH PROJECT, 2020
** cpp_d15_2019
** File description:
** ex05
*/

#ifndef EX05_HPP_
#define EX05_HPP_

#include <exception>
#include <stdexcept>
#include <vector>
#include <iostream>
#include <cstdlib>

template<typename T>
class array
{
    public:
        array();
        ~array()
        {
            for (auto item : this->_array)
            {
                if (item)
                    delete(&item);
            }
            this->_array.clear();
        };
        array(const array &array)
        {
            for (auto item : array)
            {
                this->_array.push_back(item);
            }
        };

        array(unsigned int n)
        {
            this->_array = std::vector<T>(n, 0);
        };

        array &operator=(const array &array)
        {
            this->_array.clear();
            for (auto item : array)
            {
                this->_array.push_back(item);
            }
        };

        T operator[](int n)
        {
            if (n < 0 || n > this->_array.size())
                throw std::out_of_range();
            return static_cast<uint8_t>(this->_array[n]);
        };

        void *operator new[](size_t n)
        {
            return ::operator new(array(n));
        };

        inline size_t size() const { return this->_array.size(); };

        void dump() const
        {
            size_t i = 0;
            std::cout << "[";
            for (auto item : this->_array)
            {
                if (typeid(T) == typeid(bool))
                    std::cout << std::boolalpha;
                std::cout << item << (i + 1 == this->_array.size() ? "" : ", ");
                i += 1;
            }
            std::cout << "]" << std::endl;
        }

        template <typename U>
        array<U> convertTo(U (*funcPtr)(const T &))
        {
            array<U> newArray;

            for (auto item : this->_array)
            {
                newArray._array.push_back(funcPtr(item));
            }
            return newArray;
        }
    private:
        std::vector<T> _array;
};

#endif /* !EX05_HPP_ */