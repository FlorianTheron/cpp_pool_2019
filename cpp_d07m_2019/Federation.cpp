/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** Federation
*/

#include "Federation.hpp"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp, int torpedo)
{
    this->_length = length;
    this->_width = width;
    this->_name = name;
    this->_maxWarp = maxWarp;
    this->_location = this->_home;
    this->_shield = 100;
    this->_photonTorpedo = torpedo;
    std::cout << "The ship USS " << this->_name << " has been finished." << std::endl;
    std::cout << "It is " << this->_length << " m in length and " << this->_width << " m in width." << std::endl;
    std::cout << "It can go to Warp " << this->_maxWarp << "!" << std::endl;
    if (this->_photonTorpedo != 0)
        std::cout << "Weapons are set: " << this->_photonTorpedo << " torpedoes ready." << std::endl;
}

Federation::Starfleet::Ship::Ship()
{
    this->_name = "Entreprise";
    this->_length = 289;
    this->_width = 132;
    this->_maxWarp = 6;
    std::cout << "The ship USS " << this->_name << " has been finished." << std::endl;
    std::cout << "It is " << this->_length << " m in length and " << this->_width << " m in width ." << std::endl;
    std::cout << "It can go to Warp " << this->_maxWarp << "!" << std::endl;
}

Federation::Starfleet::Ship::~Ship()
{
}

int Federation::Starfleet::Ship::getShield()
{
    return (this->_shield);
}

int Federation::Starfleet::Ship::getTorpedo()
{
    return (this->_photonTorpedo);
}

void Federation::Starfleet::Ship::setShield(int shield)
{
    this->_shield = shield;
}

void Federation::Starfleet::Ship::setTorpedo(int torpedo)
{
    this->_photonTorpedo = torpedo;
}

void Federation::Starfleet::Ship::fire(Borg::Ship *target)
{
    if (this->_photonTorpedo == 0)
    {
        std::cout << this->_name << ": No enough torpedoes to fire, " << this->_captain->getName() << "!" << std::endl;
        return;
    }
    this->_photonTorpedo -= 1;
    std::cout << this->_name << ": Firing on target. " << this->_photonTorpedo << " torpedoes remaining." << std::endl;
    target->setShield(target->getShield() - 50);
    if (this->_photonTorpedo == 0)
    {
        std::cout << this->_name << ": No more torpedoes to fire, " << this->_captain->getName() << "!" << std::endl;
        return;
    }
}

void Federation::Starfleet::Ship::fire(int torpedoes, Borg::Ship *target)
{
    if (this->_photonTorpedo == 0 || torpedoes > this->_photonTorpedo)
    {
        std::cout << this->_name << ": No enough torpedoes to fire, " << this->_captain->getName() << "!" << std::endl;
        return;
    }
    this->_photonTorpedo -= torpedoes;
    std::cout << this->_name << ": Firing on target. " << this->_photonTorpedo << " torpedoes remaining." << std::endl;
    target->setShield(target->getShield() - (50 * torpedoes));
    if (this->_photonTorpedo == 0)
    {
        std::cout << this->_name << ": No more torpedoes to fire, " << this->_captain->getName() << "!" << std::endl;
        return;
    }
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
    this->_core = core;
    std::cout << "USS " << this->_name << ": The core is set." << std::endl;
}

void Federation::Starfleet::Ship::checkCore()
{
    bool stability = this->_core->checkReactor()->isStable();

    std::cout << "USS " << this->_name << ": The core is ";
    if (stability)
        std::cout << "stable";
    else
        std::cout << "unstable";
    std::cout << " at the time." << std::endl;
}

bool Federation::Starfleet::Ship::move()
{
    if (this->_location == this->_home)
        return (false);
    this->_location = this->_home;
    return (true);
}

bool Federation::Starfleet::Ship::move(Destination d)
{
    if (this->_location == d || !this->_core->checkReactor()->isStable())
        return (false);
    this->_location = d;
    return (true);
}

bool Federation::Starfleet::Ship::move(int warp)
{
    if (warp > this->_maxWarp || !this->_core->checkReactor()->isStable() || this->_location == this->_home)
        return (false);
    this->_location = this->_home;
    return (true);
}

bool Federation::Starfleet::Ship::move(int warp, Destination d)
{
    if (this->_location == d || !this->_core->checkReactor()->isStable() || warp > this->_maxWarp)
        return (false);
    this->_location = d;
    return (true);
}

void Federation::Starfleet::Ship::promote(Federation::Starfleet::Captain *captain)
{
    this->_captain = captain;
    std::cout << captain->getName() << ": I'm glad to be the captain of the USS " << this->_name << "." << std::endl;
}

Federation::Ship::Ship(int length, int width, std::string name)
{
    this->_name = name;
    this->_length = length;
    this->_width = width;
    this->_maxWarp = 1;
    this->_location = this->_home;
    std::cout << "The independent ship " << this->_name << " just finished its construction." << std::endl;
    std::cout << "It is " << this->_length << " m in length and " << this->_width << " m in width." << std::endl;
}

Federation::Ship::~Ship()
{
}

void Federation::Ship::checkCore()
{
    bool stability = this->_core->checkReactor()->isStable();

    std::cout << this->_name << ": The core is ";
    if (stability)
        std::cout << "stable";
    else
        std::cout << "unstable";
    std::cout << " at the time." << std::endl;
}

void Federation::Ship::setupCore(WarpSystem::Core *core)
{
    this->_core = core;
    std::cout << this->_name << ": The core is set." << std::endl;
}

WarpSystem::Core *Federation::Ship::getCore()
{
    return (this->_core);
}

int Federation::Ship::getShield()
{
    return (this->_shield);
}

int Federation::Ship::getTorpedo()
{
    return (this->_photonTorpedo);
}

void Federation::Ship::setShield(int shield)
{
    this->_shield = shield;
}

void Federation::Ship::setTorpedo(int torpedo)
{
    this->_photonTorpedo = torpedo;
}

bool Federation::Ship::move()
{
    if (this->_location == this->_home)
        return (false);
    this->_location = this->_home;
    return (true);
}

bool Federation::Ship::move(Destination d)
{
    if (this->_location == d || !this->_core->checkReactor()->isStable())
        return (false);
    this->_location = d;
    return (true);
}

bool Federation::Ship::move(int warp)
{
    if (warp > this->_maxWarp || !this->_core->checkReactor()->isStable() || this->_location == this->_home)
        return (false);
    this->_location = this->_home;
    return (true);
}

bool Federation::Ship::move(int warp, Destination d)
{
    if (this->_location == d || !this->_core->checkReactor()->isStable() || warp > this->_maxWarp)
        return (false);
    this->_location = d;
    return (true);
}

Federation::Starfleet::Captain::Captain(std::string name)
{
    this->_name = name;
}

Federation::Starfleet::Captain::~Captain()
{
}

void Federation::Starfleet::Captain::setAge(int age)
{
    this->_age = age;
}

std::string Federation::Starfleet::Captain::getName()
{
    return (this->_name);
}

int Federation::Starfleet::Captain::getAge()
{
    return (this->_age);
}

Federation::Starfleet::Ensign::Ensign(std::string name)
{
    this->_name = name;
    std::cout << "Ensign " << this->_name << ", awaiting orders." << std::endl;
}

Federation::Starfleet::Ensign::~Ensign()
{
}