/*
** EPITECH PROJECT, 2020
** Piscine C++
** File description:
** EventManager
*/

#ifndef EVENTMANAGER_HPP_
#define EVENTMANAGER_HPP_

#include <string>
#include <list>
#include <algorithm>
#include "Event.hpp"

class EventManager {
    public:
        EventManager();
        EventManager(EventManager const &event);
        ~EventManager();

        EventManager &operator=(EventManager const &e);

        void addEvent(Event const &e);
        void removeEventsAt(unsigned int time);
        void dumpEvents() const;
        void dumpEventAt(unsigned int time) const;
        void addTime(unsigned int time);
        void addEventList(std::list<Event> &events);
    private:
        std::list<Event> _events;
        unsigned int _time;
};

#endif /* !EVENTMANAGER_HPP_ */
