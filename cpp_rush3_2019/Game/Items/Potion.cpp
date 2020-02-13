//
// Created by florian on 01/02/2020.
//

#include "Potion.hpp"

Potion::Potion(const std::string &name, const int &value) : Entity(name), Item(name, Item::REGEN_HP)
{
	this->_value = value;
}
