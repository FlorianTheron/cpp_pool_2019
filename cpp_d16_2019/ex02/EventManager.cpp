/*
** EPITECH PROJECT, 2020
** Piscine C++
** File description:
** EventManager
*/

#include "EventManager.hpp"
#include <iostream>

EventManager::EventManager()
{
    _time = 0;
}

EventManager::EventManager(EventManager const &eventManager)
{
    for (auto item : eventManager._events)
    {
        this->_events.push_back(item);
    }
}

EventManager &EventManager::operator=(EventManager const &eventManager)
{
    this->_events.clear();
    for (auto &item : eventManager._events)
    {
        this->_events.push_back(item);
    }
    return *this;
}

EventManager::~EventManager()
{
}

bool compare(const Event &a, const Event &b)
{
    return a.getTime() <= b.getTime();
}

void EventManager::removeEventsAt(unsigned int time)
{
    for (auto it = _events.begin(); it != _events.end();)
    {
        if (it->getTime() == time)
        {
            _events.erase(it++);
            continue;
        }
        it++;
    }
    _events.sort(compare);
}

void EventManager::addEvent(Event const &e)
{
    this->_events.push_back(e);
    _events.sort(compare);
}

void EventManager::dumpEvents() const
{
    for(auto it = _events.begin(); it != _events.end(); it++)
    {
        std::cout << it->getTime() << ": " << it->getEvent() << std::endl;
    }
}

void EventManager::dumpEventAt(unsigned int time) const
{
    for (auto it = _events.begin(); it != _events.end(); it++)
    {
        if (it->getTime() == time)
        {
            std::cout << it->getTime() << ": " << it->getEvent() << std::endl;
        }
    }
}

void EventManager::addTime(unsigned int time)
{
    _time += time;
    for(auto it = _events.begin(); it != _events.end();)
    {
        if (it->getTime() <= _time)
        {
            std::cout << it->getEvent() << std::endl;
            this->_events.erase(it++);
            continue;
        }
        it++;
    }
}

void EventManager::addEventList(std::list<Event> &events)
{
    for (auto item : events)
    {
        if (item.getTime() <= _time)
            continue;
        this->_events.push_back(item);
    }
    _events.sort(compare);
}