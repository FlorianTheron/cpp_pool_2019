//
// Created by leo on 31/01/2020.
//

#include <iostream>
#include "Entity.hpp"
#include <SFML/Graphics.hpp>

Components::Node bNode = Components::Node();
Components::Image bImage = Components::Image();
Components::Audio bAudio = Components::Audio();

Entity::Entity(const std::string &name) : _name(name), _node(bNode), _image(bImage), _audio(bAudio)
{
	this->_hasNode = false;
	this->_hasImage = false;
}

Entity::Entity(const Entity& other) : _name(other._name), _node(bNode), _image(bImage), _audio(bAudio)
{
	this->_node = other._node;
	this->_image = other._image;
}

Entity& Entity::operator=(const Entity& other)
{
	const_cast<std::string&>(this->_name) = other._name;
	this->_node = other._node;
	this->_image = other._image;
	return *this;
}

void Entity::AddComponent(Components::Node component)
{
	if (!this->_hasNode)
	{
		this->_node = component;
		this->_hasNode = true;
		this->Update();
	}
	else
	{
		std::cerr << "AddComponent [Node]: there is already Node Component." << std::endl;
	}
}

void Entity::RemoveNodeComponent()
{
	if (this->_hasNode)
	{
		this->_node = bNode;
		this->_hasNode = false;
	}
	else
	{
		std::cerr << "RemoveComponent [Node]: there is no Node Component." << std::endl;
	}
}

Components::Node& Entity::ChangeComponent(Components::Node &component)
{
	if (this->_hasNode)
	{
		Components::Node& buff = this->_node;
		this->_node = component;
		return buff;
	}
	else
	{
		std::cerr << "ChangeComponent [Node]: there is no Node Component." << std::endl;
	}
	return bNode;
}

void Entity::AddComponent(Components::Image component)
{
	if (!this->_hasImage)
	{
		this->_image = component;
		this->_hasImage = true;
	}
	else
	{
		std::cerr << "AddComponent [Image]: there is already Image Component." << std::endl;
	}
}

void Entity::RemoveImageComponent()
{
	if (this->_hasImage)
	{
		this->_image = bImage;
		this->_hasImage = false;
	}
	else
	{
		std::cerr << "RemoveComponent [Image]: there is no Image Component." << std::endl;
	}
}

Components::Image& Entity::ChangeComponent(Components::Image &component)
{
	if (this->_hasImage)
	{
		Components::Image& buff = this->_image;
		this->_image = component;
		return buff;
	}
	else
	{
		std::cerr << "ChangeComponent [Image]: there is no Node Component." << std::endl;
	}
	return bImage;
}

Components::Node& Entity::GetNodeComponent()
{
	if (this->_hasNode)
	{
		return this->_node;
	}
	else
	{
		std::cerr << "GetNodeComponent: there is no Node Component." << std::endl;
	}
	return bNode;
}

Components::Image& Entity::GetImageComponent()
{
	if (this->_hasImage)
	{
		return this->_image;
	}
	else
	{
		std::cerr << "GetImageComponent: there is no Image Component." << std::endl;
	}
	return bImage;
}

void Entity::Update()
{
	// this->_image.GetSprite().setPosition(this->_node.GetPosition());
	// this->_image.GetSprite().setScale(this->_node.GetSize());
	// this->_image.GetSprite().setRotation(this->_node.GetRadius());
}

void Entity::Draw(sf::RenderWindow& window)
{
	window.draw(this->_image.GetSprite());
}

void Entity::Events(const sf::Event &event)
{
	(void)event;
}