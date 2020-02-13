//
// Created by leo on 31/01/2020.
//

#include "Node.hpp"

Components::Node::Node()
{
	this->_position = {0, 0 };
	this->_size = { 0, 0 };
	this->_radius = 0;
}

Components::Node::Node(sf::Vector2f position, sf::Vector2f size, float radius)
{
	this->_position = position;
	this->_size = size;
	this->_radius = radius;
}

std::ostream &operator<<(std::ostream& out, const Components::Node& node)
{
	return out << "Position = { " << node.GetPosition().y << ", " << node.GetPosition().y << " }" << std::endl
		<< "Size = { " << node.GetSize().x << ", " << node.GetSize().y << " }" << std::endl
		<< "Radius = " << node.GetRadius() << std::endl;
}