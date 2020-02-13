/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** WorldManager
*/

#ifndef WORLDMANAGER_HPP_
#define WORLDMANAGER_HPP_

#include "World.hpp"
#include "../Game/Menu.hpp"
#include <vector>
#include <iostream>
#include <algorithm>

class WorldManager {
	public:
        enum gameStates {
            MENU,
            GAME,
            INVENTORY,
            PAUSE,
            FIGHT,
        };
		WorldManager(sf::RenderWindow &window);
		~WorldManager();
        void drawAll(sf::RenderWindow &window);
        void addWorld(World *world, gameStates state);
        void setType(const std::string &name);

		std::vector<World *> _worldList;

	private:
        sf::RenderWindow &_window;
        int _gameType;
    
};

#endif /* !WORLDMANAGER_HPP_ */
