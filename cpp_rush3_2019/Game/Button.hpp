/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** Button
*/

#ifndef BUTTON_HPP_
#define BUTTON_HPP_

#include "../Classes/Entity.hpp"

class Button : public Entity {
	public:
		Button(const std::string &);
		~Button();
};

#endif /* !BUTTON_HPP_ */