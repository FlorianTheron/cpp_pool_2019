/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** Menu
*/

#include "Menu.hpp"

Menu::Menu(sf::RenderWindow &w) : World(w, "MENU")
{

}

Menu::~Menu()
{
}

World *Menu::Init()
{
    World *menu = new World(_window, "MENU");
    Components::Image *backgroundImage = new Components::Image;
    backgroundImage->LoadImage("Assets/pokmon.jpg");
    Entity *backgroundEntity = new Entity("MenuBackground");
    Components::Node backgroundNode;
    backgroundNode.SetPosition({0,0});
    backgroundNode.SetSize({1280, 720});
    backgroundEntity->AddComponent(*backgroundImage);
    backgroundEntity->AddComponent(backgroundNode);
    menu->AddEntity(*backgroundEntity);

    return menu;
}