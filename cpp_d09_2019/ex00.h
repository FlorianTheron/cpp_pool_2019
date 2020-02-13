/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** ex00
*/

#ifndef EX00_H_
#define EX00_H_

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct cthulhu_s
{
    int m_power;
    char *m_name;
} cthulhu_t;

typedef struct koala_s
{
    cthulhu_t m_parent;
    char m_is_a_legend;
} koala_t;

static void koala_initializer(koala_t *, char *, char);
static void cthulhu_initializer(cthulhu_t *);
cthulhu_t *new_cthulhu();
koala_t *new_koala(char *, char);
void sleeping(cthulhu_t *);
void attack(cthulhu_t *);
void print_power(cthulhu_t *);
void eat(koala_t *);

#endif /* !EX00_H_ */
