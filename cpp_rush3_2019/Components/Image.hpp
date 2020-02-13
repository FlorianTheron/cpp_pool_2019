//
// Created by leo on 31/01/2020.
//

#ifndef RAISE_IMAGE_HPP
#define RAISE_IMAGE_HPP

#include "../Classes/Component.hpp"
#include <SFML/Graphics.hpp>

namespace Components
{
	class Image : public Component {
		 public:
			Image();

			void LoadImage(const std::string&);

			sf::Texture& GetTexture() { return this->_texture; }
			sf::Sprite& GetSprite() { return this->_sprite; }

		 private:
			sf::Texture _texture;
			sf::Sprite _sprite;
	};
}

#endif //RAISE_IMAGE_HPP
