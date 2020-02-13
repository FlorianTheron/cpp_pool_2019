/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** MateriaSource
*/

#ifndef MATERIASOURCE_HPP_
#define MATERIASOURCE_HPP_

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include <vector>

class MateriaSource : public IMateriaSource {
    public:
        MateriaSource();
        ~MateriaSource();
        void learnMateria(AMateria *);
        AMateria *createMateria(const std::string &);
    private:
        std::vector<AMateria *> _learnedMaterias;
};

#endif /* !MATERIASOURCE_HPP_ */
