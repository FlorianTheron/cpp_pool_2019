/*
** EPITECH PROJECT, 2020
** cpp_rush1_2019
** File description:
** float
*/

#include "float.h"
#include "new.h"

typedef struct
{
    Class base;
    float x;
}   FloatClass;

static void Float_ctor(FloatClass *this, va_list *args)
{
    this->x = va_arg(*args, double);
}

static void Float_dtor(FloatClass *this)
{
    free(this);
}

static char *DisplayFloat(FloatClass *this)
{
    char msg[100];

    if (!this)
        return (NULL);
    snprintf(msg, 100, "<Float (%f)>", this->x);
    return (strdup(msg));
}

Object *AddFloat(const Object *this, const Object *other)
{
    FloatClass *obj_1 = NULL;
    FloatClass *obj_2 = NULL;

    if (!this || !other)
        raise("Parameters cannot be NULL.");
    obj_1 = (FloatClass *)this;
    obj_2 = (FloatClass *)other;
    return ((Object *)(new(Float, obj_1->x + obj_2->x)));
}

Object *SubFloat(const Object *this, const Object *other)
{
    FloatClass *obj_1 = NULL;
    FloatClass *obj_2 = NULL;

    if (!this || !other)
        raise("Parameters cannot be NULL.");
    obj_1 = (FloatClass *)this;
    obj_2 = (FloatClass *)other;
    return ((Object *)(new(Float, obj_1->x - obj_2->x)));
}

Object *MulFloat(const Object *this, const Object *other)
{
    FloatClass *obj_1 = NULL;
    FloatClass *obj_2 = NULL;

    if (!this || !other)
        raise("Cannot multiply by NULL.");
    obj_1 = (FloatClass *)this;
    obj_2 = (FloatClass *)other;
    return ((Object *)(new(Float, obj_1->x * obj_2->x)));
}

Object *DivFloat(const Object *this, const Object *other)
{
    FloatClass *obj_1 = NULL;
    FloatClass *obj_2 = NULL;

    if (!this || !other)
        raise("Cannot divide by NULL.");
    obj_1 = (FloatClass *)this;
    obj_2 = (FloatClass *)other;
    if (obj_2->x == 0)
        raise("Cannot divide by 0.");
    return ((Object *)(new(Float, obj_1->x / obj_2->x)));
}

bool FloatEqual(const Object *this, const Object *other)
{
    FloatClass *obj_1 = NULL;
    FloatClass *obj_2 = NULL;

    if (!this || !other)
        raise("Cannot divide by NULL.");
    obj_1 = (FloatClass *)this;
    obj_2 = (FloatClass *)other;
    return(obj_1->x == obj_2->x ? true : false);
}

bool FloatGreaterThan(const Object *this, const Object *other)
{
    FloatClass *obj_1 = NULL;
    FloatClass *obj_2 = NULL;

    if (!this || !other)
        raise("Cannot divide by NULL.");
    obj_1 = (FloatClass *)this;
    obj_2 = (FloatClass *)other;
    return(obj_1->x > obj_2->x ? true : false);
}

bool FloatLessThan(const Object *this, const Object *other)
{
    FloatClass *obj_1 = NULL;
    FloatClass *obj_2 = NULL;

    if (!this || !other)
        raise("Cannot divide by NULL.");
    obj_1 = (FloatClass *)this;
    obj_2 = (FloatClass *)other;
    return(obj_1->x < obj_2->x ? true : false);
}

static const FloatClass _description = {
    {
        .__size__ = sizeof(FloatClass),
        .__name__ = "Float",
        .__ctor__ = (ctor_t)&Float_ctor,
        .__dtor__ = (dtor_t)&Float_dtor,
        .__str__ = (to_string_t)&DisplayFloat,
        .__add__ = (binary_operator_t)&AddFloat,
        .__sub__ = (binary_operator_t)&SubFloat,
        .__mul__ = (binary_operator_t)&MulFloat,
        .__div__ = (binary_operator_t)&DivFloat,
        .__eq__ = (binary_comparator_t)&FloatEqual,
        .__gt__ = (binary_comparator_t)&FloatGreaterThan,
        .__lt__ = (binary_comparator_t)&FloatLessThan,
    },
    .x = 0,
};

const Class *Float = (const Class *)&_description;