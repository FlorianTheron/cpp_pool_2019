//
// Created by leo on 31/01/2020.
//

#include "World.hpp"
#include <iostream>

void World::AddEntity(Entity &entity)
{
	bool exist = false;
	for (Entity* elem : this->_entities)
	{
		if (elem->GetName() == entity.GetName())
			exist = true;
	}
	if (exist)
		std::cerr << "Entity name already exist in this world" << std::endl;
	else
		this->_entities.push_back(&entity);
}

std::string World::getName() const
{
	return this->_name;
}

Entity& World::GetEntity(const std::string& name)
{
	for (Entity* elem : this->_entities)
	{
		if (elem->GetName() == name)
			return *elem;
	}
	std::cerr << "Entity don't exist in this world" << std::endl;
	return *this->_entities.at(0);
}

void World::Update()
{
	for (auto& elem : this->_entities)
	{
		elem->Update();
	}
}

void World::Draw(sf::RenderWindow& window)
{
	for (const auto& elem : this->_entities)
	{
		if (elem->HasImageComponent())
		{
			elem->Draw(window);
		}
	}
}

void World::Events(const sf::Event& event)
{
	for (const auto& elem : this->_entities)
	{
		elem->Events(event);
	}
}