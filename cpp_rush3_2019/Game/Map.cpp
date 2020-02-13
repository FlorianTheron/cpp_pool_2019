//
// Created by leo on 01/02/2020.
//

#include "Map.hpp"
#include <fstream>

std::vector<Components::Image> images;

Map::Map(const std::string& name) : Entity(name)
{

}

void Map::LoadCollisions(const std::string& path)
{
	std::ifstream ifs(path);

	if (ifs.is_open())
	{
		std::string line;

		while (std::getline(ifs, line))
		{
			while (!line.empty())
			{
				this->_collisions.push_back(std::stoi(line.substr(0, line.find(','))));
				line.erase(0, 2);
			}
		}
	}
	else
	{
		std::cerr << "LoadCollisions: unable to load this map (" << path << ")" << std::endl;
	}
}

void Map::LoadMap(const std::string& path, const std::string& collisions)
{
	std::ifstream ifs(path);

	if (ifs.is_open())
	{
		this->LoadCollisions(collisions);
		images.push_back(Components::Image());
		(images.end() - 1)->LoadImage(path);
		this->AddComponent(*(images.end() - 1));
	}
	else
	{
		std::cerr << "LoadMap: unable to load this map (" << path << ")" << std::endl;
	}
}


void Map::ClearMap()
{

}

void Map::Events(const sf::Event &event)
{
	float speed = 7.0f;

	if (event.type == sf::Event::KeyPressed)
	{
		if (event.key.code == sf::Keyboard::Left)
			GetImageComponent().GetSprite().move(-speed, 0);
		if (event.key.code == sf::Keyboard::Right)
			GetImageComponent().GetSprite().move(speed, 0);
		if (event.key.code == sf::Keyboard::Up)
			GetImageComponent().GetSprite().move(0, speed);
		if (event.key.code == sf::Keyboard::Down)
			GetImageComponent().GetSprite().move(0, -speed);
	}
}
