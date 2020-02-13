//
// Created by leo on 31/01/2020.
//

#ifndef RAISE_IWORLD_HPP
#define RAISE_IWORLD_HPP

#include "../Classes/Entity.hpp"
#include <vector>

class IWorld {
	 public:
		virtual void AddEntity(Entity&) = 0;
		virtual Entity& GetEntity(const std::string&) = 0;

		virtual void Draw(sf::RenderWindow&) = 0;
		virtual void Update() = 0;
		virtual void Events(const sf::Event&) = 0;
};

#endif //RAISE_IWORLD_HPP
