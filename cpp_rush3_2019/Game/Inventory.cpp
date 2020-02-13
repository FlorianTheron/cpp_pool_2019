/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** Inventory
*/

#include "Inventory.hpp"

Inventory::Inventory(sf::RenderWindow &w) : World(w, "INVENTORY") {}

Inventory::~Inventory()
{}

World *Inventory::Init()
{
    World *inventory = new World(_window, "INVENTORY");

    Entity *inventoryEntity = new Entity("INVENTORY");
    Components::Image *inventoryImage = new Components::Image;
    Components::Node inventoryNode;

    inventoryNode.SetPosition({1, 1});
    inventoryNode.SetSize({1280, 720});

    inventoryImage->LoadImage("Assets/Bag/BAHOK.png");
    inventoryImage->GetSprite().setPosition(inventoryNode.GetPosition());
    inventoryImage->GetSprite().setScale(inventoryNode.GetSize());
    inventoryEntity->AddComponent(inventoryNode);
    inventoryEntity->AddComponent(*inventoryImage);
    inventory->AddEntity(*inventoryEntity);

    return inventory;
}