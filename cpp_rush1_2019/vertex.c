/*
** EPITECH PROJECT, 2020
** cpp_rush1_2019
** File description:
** vertex
*/

#include <stdio.h>
#include <string.h>
#include "vertex.h"
#include "new.h"

typedef struct
{
    Class base;
    int x;
    int y;
    int z;
}   VertexClass;

static void Vertex_ctor(VertexClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
    this->z = va_arg(*args, int);
}

static void Vertex_dtor(VertexClass *this)
{
    free(this);
}

static char *DisplayVertex(VertexClass *this)
{
    char msg[100];

    if (!this)
        raise("VertexClass cannot be NULL.");
    snprintf(msg, 100, "<Vertex (%i, %i, %i)>", this->x, this->y, this->z);
    return (strdup(msg));
}

Object *AddVertex(const Object *this, const Object *other)
{
    VertexClass *obj_1 = NULL;
    VertexClass *obj_2 = NULL;

    if (!this || !other)
        raise("Objects cannot be NULL.");
    obj_1 = (VertexClass *)this;
    obj_2 = (VertexClass *)other;
    return ((Object *)(new(Vertex, obj_1->x + obj_2->x,
    obj_1->y + obj_2->y, obj_1->z + obj_2->z)));
}

Object *SubVertex(const Object *this, const Object *other)
{
    VertexClass *obj_1 = NULL;
    VertexClass *obj_2 = NULL;

    if (!this || !other)
        raise("Parameters cannot be NULL.");
    obj_1 = (VertexClass *)this;
    obj_2 = (VertexClass *)other;
    return ((Object *)(new(Vertex, obj_1->x - obj_2->x,
    obj_1->y - obj_2->y, obj_1->z - obj_2->z)));
}


static const VertexClass _description = {
    {
        .__size__ = sizeof(VertexClass),
        .__name__ = "Vertex",
        .__ctor__ = (ctor_t)&Vertex_ctor,
        .__dtor__ = (dtor_t)&Vertex_dtor,
        .__str__ = (to_string_t)&DisplayVertex,
        .__add__ = (binary_operator_t)&AddVertex,
        .__sub__ = (binary_operator_t)&SubVertex,
        .__mul__ = NULL,
        .__div__ = NULL,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0,
    .z = 0
};

Class const *Vertex = (Class const *)&_description;