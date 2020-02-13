/*
** EPITECH PROJECT, 2020
** cpp_d17_2019
** File description:
** OneTime
*/

#ifndef ONETIME_HPP_
#define ONETIME_HPP_

#include <string>
#include "IEncryptionMethod.hpp"

class OneTime {
    public:
        OneTime(const std::string &key);
        ~OneTime();
        void encryptChar(char letter);
        void decryptChar(char letter);
        void reset();
    private:
        const std::string _key;
};

#endif /* !ONETIME_HPP_ */
