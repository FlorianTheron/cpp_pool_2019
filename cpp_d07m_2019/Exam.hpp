/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** Exam
*/

#ifndef EXAM_HPP_
#define EXAM_HPP_

#include <iostream>

class Exam
{
    public:
        static bool cheat;
        void (Exam::*kobayashiMaru)(unsigned int);
        Exam(bool *b);
        ~Exam();
        void start(unsigned int);
        bool isCheating(void);
};

#endif /* !EXAM_HPP_ */
