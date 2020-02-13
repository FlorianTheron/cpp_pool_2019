/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** AEnemy
*/

#ifndef AENEMY_HPP_
#define AENEMY_HPP_

#include <string>

class AEnemy {
    public:
        AEnemy(int hp, const std::string &type);
        virtual ~AEnemy();

        virtual void takeDamage(int damage) = 0;

        inline std::string getType() const { return this->_type; };
        inline int getHP() const { return this->_hp; };
    protected:
        int _hp;
        const std::string _type;
};

#endif /* !AENEMY_HPP_ */
