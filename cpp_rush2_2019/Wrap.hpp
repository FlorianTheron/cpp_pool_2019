/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Wrap
*/

#ifndef WRAP_HPP_
#define WRAP_HPP_

#include "Toy.hpp"
#include "Object.hpp"
#include <iostream>

class Wrap : public Object {
	public:
        typedef enum {
            EMPTY,
            FULL
        } Content;

		Wrap(const std::string &type);
        ~Wrap();

        void wrapMeThat(Object*);

        inline Object* getObject() const { return this->_object; }
        inline const Content getContent() const { return this->_content; };

	protected:
        Object* _object;
        Content _content;
};

#endif /* !WRAP_HPP_ */