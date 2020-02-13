/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** Combat
*/

#ifndef COMBAT_HPP_
#define COMBAT_HPP_

#include <iostream>
#include <string>

#include "Player.hpp"
#include "Pokemon.hpp"
#include "../Classes/World.hpp"

class Combat {
    public:
        enum TURN{
            PENDING,
            MY_TURN,
            ENEMY_TURN,
        };
	public:
		Combat(sf::RenderWindow &w);
		~Combat();

        void play_fight(const Player &, const Pokemon &, sf::RenderWindow &window);
        World *Init(const Player &player, const Pokemon &pokemon);

        sf::Texture getTexture()const;
        sf::Sprite getSprite()const;

	protected:
	private:
        sf::Texture _texture;
        sf::Sprite _sprite;
        sf::RenderWindow &w;
};

#endif /* !COMBAT_HPP_ */
