//
// Created by florian on 31/01/2020.
//

#include "Audio.hpp"

Components::Audio::Audio()
{
}

Components::Audio::~Audio()
{
    this->_sounds.clear();
}

void Components::Audio::AddSound(const sf::Sound &sound)
{
    this->_sounds.push_back(sound);
}

sf::Sound &Components::Audio::GetSound(size_t idx)
{
    try
    {
        return this->_sounds.at(idx);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return this->_sounds[0];
    }
}

void Components::Audio::PlaySound(size_t idx, bool loop)
{
    try
    {
        this->_sounds.at(idx).setLoop(loop); 
        this->_sounds.at(idx).play();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void Components::Audio::PlayAll(bool loop)
{
    for (auto &item : this->_sounds)
    {
    	item.setLoop(loop);
        item.play();
    }
}

void Components::Audio::StopAll()
{
	for (auto &item : this->_sounds)
	{
		item.setLoop(false);
		item.stop();
	}
}