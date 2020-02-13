//
// Created by leo on 31/01/2020.
//

#ifndef RAISE_WORLD_HPP
#define RAISE_WORLD_HPP

#include "../Interfaces/IWorld.hpp"

class World : public IWorld {
	 public:
		World(sf::RenderWindow& window, const std::string &name) : _window(window) { this->_name = name; this->_entities = std::vector<Entity *>(); };
		void AddEntity(Entity&) override;
		Entity& GetEntity(const std::string&) override;

		std::string getName() const;
		void Update() override;
		void Draw(sf::RenderWindow&) override;
		void Events(const sf::Event&) override;

	 protected:
		std::vector<Entity*> _entities;
		sf::RenderWindow& _window;
		std::string _name;
};

#endif // RAISE_WORLD_HPP 
