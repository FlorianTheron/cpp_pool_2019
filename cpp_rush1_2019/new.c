/*
** EPITECH PROJECT, 2020
** cpp_rush1_2019
** File description:
** new
*/

#include "new.h"
#include "player.h"

// Object = void
// Class = struct

Object *new(const Class *class, ...)
{
    Object *this = NULL;
    va_list list;

    if (class == NULL)
        raise("Class cannot be NULL.");
    va_start(list, class);
    this = va_new(class, &list);
    va_end(list);
    return (this);
}

Object *va_new(const Class *class, va_list* ap)
{
    Class *this = NULL;
    Class *c = NULL;

    if (!(c = malloc(class->__size__)))
        raise("Allocated memory failed.");
    c = memcpy(c, class, class->__size__);
    if (!(this = malloc(c->__size__)))
        raise("Allocated memory failed.");
    if (class->__ctor__)
        class->__ctor__(c, ap);
    memcpy(this, c, c->__size__);
    free(c);
    return ((Object *)this);
}

void delete(Object *ptr)
{
    Class *c = NULL;

    if (!ptr)
        return;
    c = ptr;
    if (c->__dtor__)
        c->__dtor__(ptr);
}