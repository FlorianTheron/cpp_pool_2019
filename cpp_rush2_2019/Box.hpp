/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Box
*/

#ifndef BOX_HPP_
#define BOX_HPP_

#include "Toy.hpp"
#include "Wrap.hpp"

class Box : public Wrap
{
    public:

        typedef enum {
            OPEN,
            CLOSE
        } State;

        Box();

        void wrapMeThat(Toy*);
        Object* openMe();
        inline void closeMe() { this->_state = CLOSE; }
        inline const State getState() const { return this->_state; };

    protected:
        State _state;
};


#endif /* !BOX_HPP_ */