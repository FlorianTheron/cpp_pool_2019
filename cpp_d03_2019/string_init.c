/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** string_init
*/

#include "string.h"

void init_functions(string_t *this)
{
    this->assign_s = assign_s;
    this->assign_c = assign_c;
    this->append_s = append_s;
    this->append_c = append_c;
    this->at = &at;
    this->clear = clear;
    this->size = size;
    this->compare_c = compare_c;
    this->compare_s = compare_s;
    this->copy = copy;
    this->c_str = c_str;
    this->empty = empty;
    this->find_s = find_s;
    this->find_c = find_c;
    this->insert_c = insert_c;
    this->insert_s = insert_s;
    this->to_int = to_int;
    this->split_c = split_c;
    this->split_s = split_s;
    this->print = print;
}

void string_init(string_t *this, const char *s)
{
    if (s == NULL)
        return;
    this->str = calloc(strlen(s) + 1, sizeof(char));
    if (!this->str)
        return;
    strcpy(this->str, s);
    init_functions(this);
    this->join_c = join_c;
    this->join_s = join_s;
}