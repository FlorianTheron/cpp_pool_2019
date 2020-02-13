/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** ex00
*/

#include "ex00.h"

static void cthulhu_initializer(cthulhu_t *this)
{
    if (!this)
        this = malloc(sizeof(cthulhu_t));
    this->m_name = strdup("Cthulhu");
    this->m_power = 42;
    printf("----\n");
    printf("Building %s\n", this->m_name);
}

static void koala_initializer(koala_t *this, char *_name, char _is_A_Legend)
{
    if (!this)
        this = malloc(sizeof(koala_t));
    this->m_parent = *new_cthulhu();
    if (_name)
        this->m_parent.m_name = strdup(_name);
    this->m_is_a_legend = _is_A_Legend;
    this->m_parent.m_power *= _is_A_Legend;
    printf("Building %s\n", this->m_parent.m_name);
}

cthulhu_t *new_cthulhu(void)
{
    cthulhu_t *this = malloc(sizeof(cthulhu_t));

    cthulhu_initializer(this);
    return (this);
}

koala_t *new_koala(char *name, char is_a_legend)
{
    koala_t *new = malloc(sizeof(koala_t));;

    koala_initializer(new, name, is_a_legend);
    return (new);
}

void eat(koala_t *this)
{
    this->m_parent.m_power += 42;
    printf("%s eats\n", this->m_parent.m_name);
}

void print_power(cthulhu_t *this)
{
    printf("Power => %d\n", this->m_power);
}

void attack(cthulhu_t *this)
{
    if (this->m_power < 42)
        printf("%s can't attack, he doesn't have enough power\n", this->m_name);
    else
    {
        this->m_power -= 42;
        if (this->m_power < 0)
            this->m_power = 0;
        printf("%s attacks and destroys the city\n", this->m_name);
    }
}

void sleeping(cthulhu_t *this)
{
    this->m_power += 42000;
    printf("%s sleeps\n", this->m_name);
}