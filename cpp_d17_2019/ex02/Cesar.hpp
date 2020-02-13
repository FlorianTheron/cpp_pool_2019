/*
** EPITECH PROJECT, 2020
** cpp_d17_2019
** File description:
** Cesar
*/

#ifndef CESAR_HPP_
#define CESAR_HPP_

#include <vector>
#include <string>

#include "IEncryptionMethod.hpp"

class Cesar : public IEncryptionMethod {
    public:
        Cesar();
        ~Cesar();
        void encryptChar(char letter);
        void decryptChar(char cipherchar);
        void reset();
    private:
        int _index;
};

#endif /* !CESAR_HPP_ */
