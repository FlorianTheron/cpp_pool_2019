//
// Created by florian on 01/02/2020.
//

#include "Pokemon.hpp"

Pokemon::Pokemon(const std::string &name, const std::string &path) : Entity(name)
{
	this->_hp = this->_maxHp = 100;
	this->_attack = 40;
	this->_defense = 30;
	this->_lvl = 1;
	this->_image.LoadImage(path);
	this->_path = path;
}

Pokemon::~Pokemon()
{

}

std::string Pokemon::getTextureStr() const
{
	return (this->_path);
}

void Pokemon::takeDamage(const size_t &damage)
{
	this->_hp -= damage;
	if (this->_hp < 0)
		this->~Pokemon();
}

void Pokemon::SetHp(const size_t &value)
{
	if (value > this->_maxHp)
	{
		this->_hp = this->_maxHp;
	}
	else
	{
		this->_hp = value;
	}
}

sf::Texture& Pokemon::getTexture()
{
	return this->_image.GetTexture();
}

sf::Sprite Pokemon::getSprite()
{
    return this->_image.GetSprite();
}

std::ostream &operator<<(std::ostream& out, const Pokemon& pokemon)
{
	try {
		return out << "Name: " << pokemon.GetName() << std::endl
				   << "Hp: " << pokemon.GetHp() << " (Max HP: " << pokemon.GetMaxHp() << ")" << std::endl
				   << "Attack: " << pokemon.GetAttack() << std::endl
				   << "Defense: " << pokemon.GetDefense()
				   << "Level: " << pokemon.GetLvl();
	}
	catch(const std::exception &err)
	{
		std::cout << err.what() << std::endl;
		throw new std::exception();
	}
}