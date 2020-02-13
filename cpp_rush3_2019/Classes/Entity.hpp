//
// Created by leo on 31/01/2020.
//

#ifndef RAISE_ENTITY_HPP
#define RAISE_ENTITY_HPP

#include "../Interfaces/IEntity.hpp"

#include <SFML/Graphics/Image.hpp>
#include "../Components/Node.hpp"
#include "../Components/Image.hpp"
#include "../Components/Audio.hpp"
#include <vector>
#include <iostream>

class Entity : public IEntity {
	 public:
		Entity(const std::string &);
		Entity(const Entity&);

		Entity& operator=(const Entity&);

		void AddComponent(Components::Node);
		void RemoveNodeComponent();
		Components::Node& ChangeComponent(Components::Node&);

		void AddComponent(Components::Image);
		void RemoveImageComponent();
		Components::Image& ChangeComponent(Components::Image&);

		Components::Node& GetNodeComponent();
		inline const bool& HasNodeComponent() const { return this->_hasNode; }

		Components::Image& GetImageComponent();
		inline const bool& HasImageComponent() const { return this->_hasImage; }

		inline const std::string& GetName() const { return this->_name; }

		void Update() override;
		void Draw(sf::RenderWindow&) override;
		void Events(const sf::Event&) override;

	 protected:
		const std::string _name;

		Components::Node& _node;
		bool _hasNode = false;

		Components::Image _image;
		bool _hasImage = false;

		Components::Audio& _audio;
		bool _hasAudio = false;
};

#endif //RAISE_ENTITY_HPP
