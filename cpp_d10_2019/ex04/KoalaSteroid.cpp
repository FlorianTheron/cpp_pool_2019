/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** KoalaSteroid
*/

#include "KoalaSteroid.hpp"

KoalaSteroid::KoalaSteroid() : _name("KoalaSteroid")
{
}

KoalaSteroid::~KoalaSteroid()
{
}

std::string KoalaSteroid::getName() const
{
    return this->_name;
}

std::string KoalaSteroid::beMined(__attribute__((unused)) DeepCoreMiner *laser) const
{
    return ("Zazium");
}

std::string KoalaSteroid::beMined(__attribute__((unused)) StripMiner *laser) const
{
    return ("Koalite");
}