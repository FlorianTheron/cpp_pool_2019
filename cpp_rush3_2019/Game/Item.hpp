//
// Created by florian on 01/02/2020.
//

#ifndef CPP_RUSH3_2019_ITEM_HPP
#define CPP_RUSH3_2019_ITEM_HPP

#include "../Classes/Entity.hpp"
#include "Pokemon.hpp"

class Item : public virtual Entity {
	 public:
		enum ItemEffect {
			NONE,
			REGEN_HP,
			POKEBALL
		};
		Item(const std::string &name, const ItemEffect &effect);
		virtual ~Item() = default;

		inline const ItemEffect& GetItemEffect() const { return this->_effect; };
		inline const int& GetValue() const { return this->_value; };
		inline void SetItemEffect(ItemEffect &effect) { this->_effect = effect; };
		void UseItem(Pokemon &);
	 protected:
		ItemEffect _effect;
		int _value;
};

std::ostream &operator<<(std::ostream& out, const Item& item);

#endif //CPP_RUSH3_2019_ITEM_HPP
