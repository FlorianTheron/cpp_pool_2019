/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Santa
*/

#ifndef SANTA_HPP_
#define SANTA_HPP_

#include <string>
#include <map>

class Santa {
	public:
		Santa();

		typedef struct {
			std::string _name;
			std::string _type;
		} GiftData;

		GiftData AddGift(std::string);
		void FillSleigh(char **paths);
		void PrintContent();

	private:
		std::map<std::string, std::string> _sleigh;
};

#endif /* !SANTA_HPP_ */