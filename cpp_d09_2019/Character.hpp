/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Character
*/

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include <string>
#include <iostream>

class Character {
    public:
        enum AttackRange
        {
            CLOSE,
            RANGE
        };

    public:
        Character(const std::string &name, int level);
        ~Character();

        AttackRange Range;

        const std::string &getName() const;
        inline int getLvl() const { return this->_level; };
        inline int getPv() const { return this->_hp; };
        inline int getPower() const { return this->_power; };
        inline int getStrength() const { return this->_strength; };
        inline int getStamina() const { return this->_stamina; };
        inline int getIntelligence() const { return this->_intelligence; };
        inline int getSpirit() const { return this->_spirit; };
        inline int getAgility() const { return this->_agility; };

        int CloseAttack();
        int RangeAttack();
        void Heal();
        void RestorePower();
        void TakeDamage(int damage);

    protected:
        const std::string _name;
        int _level;
        std::string _class;
        int _power;
        int _hp;
        int _strength;
        int _stamina;
        int _intelligence;
        int _spirit;
        int _agility;
};

#endif /* !CHARACTER_HPP_ */
