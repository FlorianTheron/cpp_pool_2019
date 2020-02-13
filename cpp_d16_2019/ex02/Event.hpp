/*
** EPITECH PROJECT, 2020
** Piscine C++
** File description:
** Event
*/

#ifndef EVENT_HPP_
#define EVENT_HPP_

#include <string>

class Event {
    public:
        Event();
        Event(unsigned int time, const std::string &event);
        Event(Event const &event);
        ~Event();

        Event &operator=(Event const &event);

        unsigned int getTime() const;
        const std::string &getEvent() const;
        void setTime(unsigned int time);
        void setEvent(const std::string &event);
        bool compare(const Event &event);
    private:
        unsigned int _time;
        std::string _event;
};

#endif /* !EVENT_HPP_ */
