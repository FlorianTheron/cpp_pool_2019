/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** WarpSystem
*/

#ifndef WARPSYSTEM_HPP_
#define WARPSYSTEM_HPP_

#include <iostream>

namespace WarpSystem {
    class QuantumReactor {
        public:
            QuantumReactor();
            ~QuantumReactor();
            bool isStable ();
            void setStability(bool stability);
        private:
            bool _stability = true;
    };

    class Core {
        public:
            Core(QuantumReactor *core);
            ~Core();
            QuantumReactor *checkReactor();
        private:
            QuantumReactor *_core;
    };
}

#endif /* !WARPSYSTEM_HPP_ */
