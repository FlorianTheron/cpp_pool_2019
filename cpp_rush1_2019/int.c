/*
** EPITECH PROJECT, 2020
** cpp_rush1_2019
** File description:
** int
*/

#include "int.h"
#include "new.h"

typedef struct
{
    Class base;
    int x;
}   IntClass;

static void Int_ctor(IntClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
}

static void Int_dtor(IntClass *this)
{
    free(this);
}

static char *DisplayInt(IntClass *this)
{
    char msg[100];

    if (!this)
        return (NULL);
    snprintf(msg, 100, "<Int (%i)>", this->x);
    return (strdup(msg));
}

Object *AddInt(const Object *this, const Object *other)
{
    IntClass *obj_1 = NULL;
    IntClass *obj_2 = NULL;

    if (!this || !other)
        raise("Parameters cannot be NULL.");
    obj_1 = (IntClass *)this;
    obj_2 = (IntClass *)other;
    return ((Object *)(new(Int, obj_1->x + obj_2->x)));
}

Object *SubInt(const Object *this, const Object *other)
{
    IntClass *obj_1 = NULL;
    IntClass *obj_2 = NULL;

    if (!this || !other)
        raise("Parameters cannot be NULL.");
    obj_1 = (IntClass *)this;
    obj_2 = (IntClass *)other;
    return ((Object *)(new(Int, obj_1->x - obj_2->x)));
}

Object *MulInt(const Object *this, const Object *other)
{
    IntClass *obj_1 = NULL;
    IntClass *obj_2 = NULL;

    if (!this || !other)
        raise("Cannot multiply by NULL.");
    obj_1 = (IntClass *)this;
    obj_2 = (IntClass *)other;
    return ((Object *)(new(Int, obj_1->x * obj_2->x)));
}

Object *DivInt(const Object *this, const Object *other)
{
    IntClass *obj_1 = NULL;
    IntClass *obj_2 = NULL;

    if (!this || !other)
        raise("Cannot divide by NULL.");
    obj_1 = (IntClass *)this;
    obj_2 = (IntClass *)other;
    if (obj_2->x == 0)
        raise("Cannot divide by 0.");
    return ((Object *)(new(Int, obj_1->x / obj_2->x)));
}

bool IntEqual(const Object *this, const Object *other)
{
    IntClass *obj_1 = NULL;
    IntClass *obj_2 = NULL;

    if (!this || !other)
        raise("Cannot divide by NULL.");
    obj_1 = (IntClass *)this;
    obj_2 = (IntClass *)other;
    return(obj_1->x == obj_2->x ? true : false);
}

bool IntGreaterThan(const Object *this, const Object *other)
{
    IntClass *obj_1 = NULL;
    IntClass *obj_2 = NULL;

    if (!this || !other)
        raise("Cannot divide by NULL.");
    obj_1 = (IntClass *)this;
    obj_2 = (IntClass *)other;
    return(obj_1->x > obj_2->x ? true : false);
}

bool IntLessThan(const Object *this, const Object *other)
{
    IntClass *obj_1 = NULL;
    IntClass *obj_2 = NULL;

    if (!this || !other)
        raise("Cannot divide by NULL.");
    obj_1 = (IntClass *)this;
    obj_2 = (IntClass *)other;
    return(obj_1->x < obj_2->x ? true : false);
}

static const IntClass _description = {
    {
        .__size__ = sizeof(IntClass),
        .__name__ = "Int",
        .__ctor__ = (ctor_t)&Int_ctor,
        .__dtor__ = (dtor_t)&Int_dtor,
        .__str__ = (to_string_t)&DisplayInt,
        .__add__ = (binary_operator_t)&AddInt,
        .__sub__ = (binary_operator_t)&SubInt,
        .__mul__ = (binary_operator_t)&MulInt,
        .__div__ = (binary_operator_t)&DivInt,
        .__eq__ = (binary_comparator_t)&IntEqual,
        .__gt__ = (binary_comparator_t)&IntGreaterThan,
        .__lt__ = (binary_comparator_t)&IntLessThan,
    },
    .x = 0,
};

const Class *Int = (const Class *)&_description;