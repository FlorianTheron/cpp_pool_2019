//
// Created by florian on 01/02/2020.
//

#ifndef RAISE_PLAYER_HPP
#define RAISE_PLAYER_HPP

#include <string>
#include <iostream>

#include "../Classes/Entity.hpp"
#include "../Components/Image.hpp"

#include "Pokemon.hpp"

class Player : public Entity {
	 public:
		Player(const std::string &name);
		~Player();
		void Move(float x, float y);
		void SetHp(int value);
		sf::Sprite getSprite() const;
		int GetHp() const;
		void LoopAnim(int offset, int max, int add);
		Pokemon* getPokemon(int) const;
		void setRect(int offset);
		void setOffsetPosition(sf::RenderWindow &window);
	 private:
		sf::IntRect _rect;
		sf::Texture _texture;
		sf::Clock _clock;
		sf::Sprite _sprite;
		int _hp;
		std::vector<Pokemon*> _player_pokemon;
};

#endif //RAISE_PLAYER_HPP
