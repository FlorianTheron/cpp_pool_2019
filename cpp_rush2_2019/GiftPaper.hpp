/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** GiftPaper
*/

#ifndef GIFTPAPER_HPP_
#define GIFTPAPER_HPP_

#include "Wrap.hpp"
#include "Box.hpp"

class GiftPaper : public Wrap {
	public:
		GiftPaper();
		~GiftPaper();

        void wrapMeThat(Box*);
        Object* openMe();
};

#endif /* !GIFTPAPER_HPP_ */