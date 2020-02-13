/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include <string.h>
#include "point.h"
#include "new.h"

typedef struct
{
    Class base;
    int x;
    int y;
}   PointClass;

static void Point_ctor(PointClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
}

static void Point_dtor(PointClass *this)
{
    free(this);
}

static char *DisplayPoint(PointClass *this)
{
    char msg[100];

    if (!this)
        return (NULL);
    snprintf(msg, 100, "<Point (%i, %i)>", this->x, this->y);
    return (strdup(msg));
}

Object *AddPoint(const Object *this, const Object *other)
{
    PointClass *obj_1 = NULL;
    PointClass *obj_2 = NULL;

    if (!this || !other)
        raise("Parameters cannot be NULL.");
    obj_1 = (PointClass *)this;
    obj_2 = (PointClass *)other;
    return ((Object *)(new(Point, obj_1->x + obj_2->x, obj_1->y + obj_2->y)));
}

Object *SubPoint(const Object *this, const Object *other)
{
    PointClass *obj_1 = NULL;
    PointClass *obj_2 = NULL;

    if (!this || !other)
        raise("Parameters cannot be NULL.");
    obj_1 = (PointClass *)this;
    obj_2 = (PointClass *)other;
    return ((Object *)(new(Point, obj_1->x - obj_2->x, obj_1->y - obj_2->y)));
}

static const PointClass _description = {
    {
        .__size__ = sizeof(PointClass),
        .__name__ = "Point",
        .__ctor__ = (ctor_t)&Point_ctor,
        .__dtor__ = (dtor_t)&Point_dtor,
        .__str__ = (to_string_t)&DisplayPoint,
        .__add__ = (binary_operator_t)&AddPoint,
        .__sub__ = (binary_operator_t)&SubPoint,
        .__mul__ = NULL,
        .__div__ = NULL,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0
};

const Class *Point = (const Class *)&_description;