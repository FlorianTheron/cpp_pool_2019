//
// Created by leo on 31/01/2020.
//

#ifndef RAISE_IENTITY_HPP
#define RAISE_IENTITY_HPP

#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include <vector>

#include "../Classes/Component.hpp"

class IEntity {
	 public:
		virtual ~IEntity() {};

		virtual void Update() = 0;
		virtual void Draw(sf::RenderWindow&) = 0;
		virtual void Events(const sf::Event&) = 0;
};


#endif //RAISE_IENTITY_HPP
