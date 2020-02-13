/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** WarpSystem
*/

#include "WarpSystem.hpp"

WarpSystem::QuantumReactor::QuantumReactor()
{
}

WarpSystem::QuantumReactor::~QuantumReactor()
{
}

bool WarpSystem::QuantumReactor::isStable()
{
    return (this->_stability);
}

void WarpSystem::QuantumReactor::setStability(bool stability)
{
    this->_stability = stability;
}

WarpSystem::Core::Core(QuantumReactor *core)
{
    this->_core = core;
}

WarpSystem::Core::~Core()
{
}

WarpSystem::QuantumReactor *WarpSystem::Core::checkReactor()
{
    return (this->_core);
}