//
// Created by florian on 01/02/2020.
//

#ifndef RAISE_POKEMON_HPP
#define RAISE_POKEMON_HPP

#include "../Classes/Entity.hpp"
#include <exception>

class Pokemon : public Entity {
	 public:
		Pokemon(const std::string &, const std::string &path);
		~Pokemon();

		void SetHp(const size_t &value);
		void takeDamage(const size_t &value);
		sf::Texture& getTexture();
        sf::Sprite getSprite();
		std::string getTextureStr()const;
		inline void SetAttack(const size_t &value) { this->_attack = value; };
		inline void SetDefense(const size_t &value) { this->_defense = value; };
		inline const size_t& GetMaxHp() const { return this->_maxHp; };
		inline const size_t& GetHp() const { return this->_hp; };
		inline const size_t& GetAttack() const { return this->_attack; };
		inline const size_t& GetDefense() const { return this->_defense; };
		inline const size_t& GetLvl() const { return this->_lvl; };
	 protected:
		std::string _path;
		Components::Image _image;
	 private:
		size_t _maxHp;
		size_t _hp;
		size_t _attack;
		size_t _defense;
		size_t _lvl;
		size_t _exp;
};

std::ostream &operator<<(std::ostream& out, const Pokemon& node);

#endif //RAISE_POKEMON_HPP
