/*
** EPITECH PROJECT, 2020
** cpp_d13_2019
** File description:
** ToyStory
*/

#include "ToyStory.hpp"
#include <iostream>
#include <fstream>
 
void ToyStory::tellMeAStory(std::string file, Toy &toy1, bool (Toy::*func1)(const std::string&), Toy &toy2, bool (Toy::*func2)(const std::string&))
{
    std::ifstream ifs(file);
    if (ifs.is_open() == false)
    {
        std::cout << "Bad Story" << std::endl;
        return;
    }

    std::cout << toy1.getAscii() << std::endl;
    std::cout << toy2.getAscii() << std::endl;
    std::string line;
    int turn = 0;

    while(std::getline(ifs, line))
    {
        if (line.find("picture:") == 0 && turn == 0)
        {
            line.erase(0, 8);
            if (!toy1.setAscii(line))
            {
                std::cout << toy1.getLastError().where() << ": " << toy1.getLastError().what() << std::endl;
                break;
            }
            else
            {
                std::cout << toy1.getAscii() << std::endl;
            }
        }
        else if (line.find("picture:") == 0 && turn == 1)
        {
            line.erase(0, 8);
            if (!toy2.setAscii(line))
            {
                std::cout << toy2.getLastError().where() << ": " << toy2.getLastError().what() << std::endl;
                break;
            }
            else
            {
                std::cout << toy2.getAscii() << std::endl;
            }
        }
        else {
            if (turn == 0)
            {
                (toy1.*func1)(line);
                turn = 1;
            }
            else
            {
                (toy2.*func2)(line);
                turn = 0;
            }
        }
    }
}