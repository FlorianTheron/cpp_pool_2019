/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** Combat
*/

#include "Combat.hpp"

Combat::Combat(sf::RenderWindow &w): w(w)
{
    this->_texture.loadFromFile("./Assets/Fight/fight_battle.png");
	this->_sprite.setTexture(this->_texture);
    this->_texture.setSmooth(true);
}

Combat::~Combat()
{
}

sf::Texture Combat::getTexture()const
{
    return (this->_texture);
}

sf::Sprite Combat::getSprite()const
{
    return (this->_sprite);
}


void Combat::play_fight(const Player &player, const Pokemon &pokemon, sf::RenderWindow &window)
{
    window.draw(this->_sprite);
}

World *Combat::Init(const Player &player, const Pokemon &pokemon)
{
    World *fight = new World(w, "FIGHT");
    Components::Image *backgroundImage = new Components::Image;
    backgroundImage->LoadImage("./Assets/Fight/fight_battle.png");
    Entity *backgroundEntity = new Entity("Fight");
    // Components::Node backgroundNode;
    // backgroundNode.SetPosition({0,0});
    // backgroundNode.SetSize({1280, 720});
    backgroundEntity->AddComponent(*backgroundImage);
    // backgroundEntity->AddComponent(backgroundNode);
    fight->AddEntity(*backgroundEntity);
    // menu.AddEntity(playButton);
    // menu.AddEntity(quitButton);

    Entity *PlayerPokemon = new Entity("Player");
    fight->AddEntity(*PlayerPokemon);
    Components::Image *ImgPlayer = new Components::Image;
    ImgPlayer->LoadImage(player.getPokemon(0)->getTextureStr());
    PlayerPokemon->AddComponent(*ImgPlayer);

    Entity *Pokemon = new Entity("Pokemon");
    fight->AddEntity(*Pokemon);
    Components::Image *ImgPokemon = new Components::Image;
    ImgPokemon->LoadImage(pokemon.getTextureStr());
    Pokemon->AddComponent(*ImgPokemon);

    return fight;
}