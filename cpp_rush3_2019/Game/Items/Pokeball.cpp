//
// Created by florian on 01/02/2020.
//

#include "Pokeball.hpp"

Pokeball::Pokeball(const std::string &name, const int &value) : Entity(name), Item(name, ItemEffect::POKEBALL)
{
	this->_value = value;
}