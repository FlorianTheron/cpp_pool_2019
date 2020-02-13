//
// Created by florian on 01/02/2020.
//

#include "Item.hpp"

#include "Item.hpp"

Item::Item(const std::string &name, const ItemEffect &effect) : Entity(name)
{
	this->_effect = effect;
}

void Item::UseItem(Pokemon &pokemon)
{
	switch (this->_effect)
	{
		case REGEN_HP:
			pokemon.SetHp(pokemon.GetHp() + this->_value);
			break;
		case POKEBALL:
			break;
		default:
			break;
	}
}

std::ostream &operator<<(std::ostream& out, const Item& item)
{
	return out << item.GetName() << ": " << item.GetValue() << " - " << "ItemEffect: " << item.GetItemEffect();
}