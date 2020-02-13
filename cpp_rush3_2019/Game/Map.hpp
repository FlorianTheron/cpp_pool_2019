//
// Created by leo on 01/02/2020.
//

#ifndef CPP_RUSH3_2019_MAP_HPP
#define CPP_RUSH3_2019_MAP_HPP

#include "../Classes/Entity.hpp"
#include "../Interfaces/IMap.hpp"

#include <vector>

class Map : public Entity, public IMap {
	 public:
		Map(const std::string&);
		~Map() override = default;
		void ClearMap() override;
		void LoadMap(const std::string&, const std::string&) override;
		void Events(const sf::Event &event) override;

	 private:
		void LoadCollisions(const std::string&) override;
		std::vector<int> _collisions;
		Components::Image _image;
};


#endif //CPP_RUSH3_2019_MAP_HPP
