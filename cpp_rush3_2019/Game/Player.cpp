//
// Created by florian on 01/02/2020.
//

#include "Player.hpp"

Player::Player(const std::string &name) : Entity(name)
{
	this->_hp = 100;
	this->_player_pokemon.push_back(new Pokemon("Tarek", "./Assets/Pokedex/lion.jpeg"));
	_texture.loadFromFile("Assets/Player/player.png");
	_rect.height = 23;
	_rect.width = 18;
	_sprite.setTexture(_texture);
	_sprite.setTextureRect(_rect);
	_sprite.setScale({3.8, 3.8});
	_sprite.setPosition(0, 0);
}

Player::~Player()
{
}

int Player::GetHp() const
{
	return this->_hp;
}

void Player::setOffsetPosition(sf::RenderWindow &window)
{
	this->_sprite.setPosition(window.getSize().x / 2, window.getSize().y / 2);
}

void Player::LoopAnim(int offset, int max, int add)
{
	if (_clock.getElapsedTime().asSeconds() > 0.1f) {
		if (_rect.left >= max)
			_rect.left = offset;
		else
			_rect.left += add;
		_clock.restart();
		_sprite.setTextureRect(_rect);
	}
}

Pokemon* Player::getPokemon(int idx) const
{
	return (this->_player_pokemon.at(idx));
}

void Player::Move(float x, float y)
{
// 	if (this->_hasNode)
// 	{
	this->_sprite.setPosition({x, y});
	// }
	// else
	// {
	// 	std::cerr << "No node associated with the Player" << std::endl;
	// }
}

void Player::setRect(int offset)
{
	this->_rect.left = offset;
}

sf::Sprite Player::getSprite() const
{
	return this->_sprite;
}

void Player::SetHp(int value)
{
	if (this->_hp < 100)
	{
		int required = 100 - value;
		this->_hp += required;
	}
}