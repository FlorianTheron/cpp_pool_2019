/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** XMLParser
*/

#ifndef XMLPARSER_HPP_
#define XMLPARSER_HPP_

#include "Object.hpp"
#include "GiftPaper.hpp"
#include "Teddy.hpp"
#include "LittlePony.hpp"
#include "GiftPaper.hpp"
#include <map>

class XMLParser {
    public:

        typedef struct {
            std::string _name;
            std::string _type;
        } GiftData;

        XMLParser();
        ~XMLParser();
        void WriteFile(Object *);
        GiftData ReadFile(std::string file);
        int GetFileIndex();
};

#endif /* !XMLPARSER_HPP_ */
