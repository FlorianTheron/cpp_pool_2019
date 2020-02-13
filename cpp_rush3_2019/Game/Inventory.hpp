/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** Inventory
*/

#ifndef INVENTORY_HPP_
#define INVENTORY_HPP_

#include "../Classes/World.hpp"

class Inventory : public World {
	public:
		Inventory(sf::RenderWindow &w);
		~Inventory();
        World *Init();
};

#endif /* !INVENTORY_HPP_ */
