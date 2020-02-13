/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Character
*/

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <array>
#include <iostream>

class Character : public ICharacter {
    public:
        Character(const std::string &name);
        Character(const Character &);
        ~Character();
        const std::string &getName() const { return this->_name; };
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);

        Character &operator=(const Character &);
    private:
        const std::string _name;
        std::array<AMateria *, 4> _materias;

};

#endif /* !CHARACTER_HPP_ */
