//
// Created by leo on 31/01/2020.
//

#ifndef RAISE_NODE_HPP
#define RAISE_NODE_HPP

#include "../Classes/Component.hpp"
#include <ostream>
#include <iostream>

#include <SFML/System.hpp>

namespace Components
{
	class Node : public Component {
		 public:
			Node();
			Node(sf::Vector2f, sf::Vector2f, float);

			inline void SetPosition(sf::Vector2f position) { this->_position = position; }
			inline const sf::Vector2f& GetPosition() const { return this->_position; }

			inline void SetSize(sf::Vector2f size) { this->_size = size; }
			inline const sf::Vector2f& GetSize() const { return this->_size; }

			inline void SetRadius(float radius) { this->_radius = radius; }
			inline const float& GetRadius() const { return this->_radius; }

		 private:
			sf::Vector2f _position;
			sf::Vector2f _size;
			float _radius;
	};
}

std::ostream &operator<<(std::ostream& out, const Components::Node& node);

#endif //RAISE_NODE_HPP
