//
// Created by leo on 31/01/2020.
//

#include "Image.hpp"

Components::Image::Image()
{

}

void Components::Image::LoadImage(const std::string& path)
{
	this->_texture.loadFromFile(path);
	this->_sprite.setTexture(this->_texture);
}