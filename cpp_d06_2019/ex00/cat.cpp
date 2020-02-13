/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** cat
*/

#include <iostream>
#include <fstream>

void cat(std::string str)
{
    std::ifstream stream(str);
    std::string line;

    if (!stream.is_open())
    {
        std::cerr << "my_cat: " << str << ": No such file or directory" << std::endl;
        return;
    }
    while (std::getline(stream, line))
        std::cout << line << std::endl;
    stream.close();
}

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "my_cat: Usage: ./my_cat file [...]" << std::endl;
        return 84;
    }
    for (int i = 1; av[i]; i += 1)
        cat(av[i]);
    return 0;
}