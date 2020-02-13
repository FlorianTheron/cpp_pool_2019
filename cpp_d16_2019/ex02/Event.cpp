/*
** EPITECH PROJECT, 2020
** Piscine C++
** File description:
** Event
*/

#include "Event.hpp"

Event::Event()
{
    this->_time = 0;
    this->_event = "";
}

Event::~Event()
{
}

Event::Event(unsigned int time, const std::string &event)
{
    this->_time = time;
    this->_event = event;
}

Event::Event(Event const &event)
{
    this->_event = event._event;
    this->_time = event._time;
}

Event &Event::operator=(Event const &event)
{
    this->_event = event._event;
    this->_time = event._time;
    return *this;
}

unsigned int Event::getTime() const
{
    return this->_time;
}

const std::string &Event::getEvent() const
{
    return this->_event;
}

void Event::setTime(unsigned int time)
{
    this->_time = time;
}

void Event::setEvent(const std::string &event)
{
    this->_event = event;
}

bool Event::compare(const Event &e)
{
    return this->_time < e._time;
}