/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** WorldManager
*/

#include "WorldManager.hpp"

WorldManager::WorldManager(sf::RenderWindow &window) : _window(window)
{
    Menu menu(window);
    this->_worldList.push_back(menu.Init());
    this->_gameType = MENU;
}

WorldManager::~WorldManager()
{
}

// int WorldManager::gameType()
// {
//     return this->_gameType;
// }

// void WorldManager::addWorld(World *world, gameStates state)
// {
//     this->_worldList.insert( std::pair<World*, WorldManager::gameStates>(world, state) );
// }

void WorldManager::setType(const std::string &name)
{
    if (name == "MENU")
        this->_gameType = MENU;
    else if (name == "GAME")
        this->_gameType = GAME;
    else if (name == "INVENTORY")
        this->_gameType = INVENTORY;
}

void WorldManager::drawAll(sf::RenderWindow &window)
{
    this->_worldList[this->_gameType]->Update();
	this->_worldList[this->_gameType]->Draw(window);
}
