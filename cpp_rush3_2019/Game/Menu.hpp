/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** Menu
*/

#ifndef MENU_HPP_
#define MENU_HPP_

#include "../Classes/World.hpp"
#include "Button.hpp"

class Menu : public World {
    public:
        Menu(sf::RenderWindow &w);
        ~Menu();
        World *Init();
};

#endif /* !MENU_HPP_ */
