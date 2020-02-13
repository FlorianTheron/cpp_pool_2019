/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Santa
*/

#include "Santa.hpp"
#include <fstream>
#include <regex>
#include <iostream>

Santa::Santa()
{
}

void Santa::FillSleigh(char **paths)
{
    Santa::GiftData Buff;

    for (int i = 1; paths[i] != NULL; i += 1)
    {
        Buff = this->AddGift(paths[i]);
        this->_sleigh.insert(std::pair<std::string, std::string>(Buff._name, Buff._type));
    }
}


void Santa::PrintContent()
{
    for (auto elem : this->_sleigh)
    {
        if (elem.first.empty() == true)
        {
            std::cout << "Ho Ho Ho... Those elfs forgot again to wrap a gift..." << std::endl;
        }
        else
        {
            std::cout << "Ho Ho Ho ! This " << elem.first << " " << elem.second << " looks awesome !" << std::endl;
        }
    }
}

Santa::GiftData Santa::AddGift(std::string file)
{
    Santa::GiftData toy;
    std::ifstream reader(file);
    std::string line; 

    if (reader.is_open() == true)
    {
        while (std::getline(reader, line))
        {
            size_t pos_start = line.find("<Toy");
            size_t pos_end = line.find("</Toy>");

            if (pos_start != std::string::npos && pos_end != std::string::npos)
            {
                break;
            }
        }
        reader.close();
    }
    
    size_t n = 0;
    while ((n = line.find("\t")) != std::string::npos)
    {
        line.replace(n, 1, "");
    }
    
    std::regex find_name("name=\"(.*?)\"");
    std::smatch match_name;
    std::string name_value;

    if (std::regex_search(line, match_name, find_name) && match_name.size() > 1)
    {
        name_value = match_name.str(1);
    }

    std::regex find_type("type=\"(.*?)\"");
    std::smatch match_type;
    std::string type_value;

    if (std::regex_search(line, match_type, find_type) && match_type.size() > 1)
    {
        type_value = match_type.str(1);
    }

    toy._name = name_value;
    toy._type = type_value;

    return toy;
}