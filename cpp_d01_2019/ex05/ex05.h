/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** ex05
*/

#include <inttypes.h>

#ifndef EX05_H_
#define EX05_H_

typedef union foo_s
{
    uint32_t bar;
    struct
    {
        uint16_t foo;
        union
        {
            uint16_t bar;
            uint16_t foo;
        } bar;
    } foo;
} foo_t;

#endif /* !EX05_H_ */
