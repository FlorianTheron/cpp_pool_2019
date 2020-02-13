/*
** EPITECH PROJECT, 2020
** cpp_rush1_2019
** File description:
** char
*/

#include "char.h"
#include "new.h"

typedef struct
{
    Class base;
    char x;
}   CharClass;

static void Char_ctor(CharClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
}

static void Char_dtor(CharClass *this)
{
    free(this);
}

static char *DisplayChar(CharClass *this)
{
    char msg[100];

    if (!this)
        return (NULL);
    snprintf(msg, 100, "<Char (%c)>", this->x);
    return (strdup(msg));
}

Object *AddChar(const Object *this, const Object *other)
{
    CharClass *obj_1 = NULL;
    CharClass *obj_2 = NULL;

    if (!this || !other)
        raise("Parameters cannot be NULL.");
    obj_1 = (CharClass *)this;
    obj_2 = (CharClass *)other;
    return ((Object *)(new(Char, obj_1->x + obj_2->x)));
}

Object *SubChar(const Object *this, const Object *other)
{
    CharClass *obj_1 = NULL;
    CharClass *obj_2 = NULL;

    if (!this || !other)
        raise("Parameters cannot be NULL.");
    obj_1 = (CharClass *)this;
    obj_2 = (CharClass *)other;
    return ((Object *)(new(Char, obj_1->x - obj_2->x)));
}

Object *MulChar(const Object *this, const Object *other)
{
    CharClass *obj_1 = NULL;
    CharClass *obj_2 = NULL;

    if (!this || !other)
        raise("Cannot multiply by NULL.");
    obj_1 = (CharClass *)this;
    obj_2 = (CharClass *)other;
    return ((Object *)(new(Char, obj_1->x * obj_2->x)));
}

Object *DivChar(const Object *this, const Object *other)
{
    CharClass *obj_1 = NULL;
    CharClass *obj_2 = NULL;

    if (!this || !other)
        raise("Cannot divide by NULL.");
    obj_1 = (CharClass *)this;
    obj_2 = (CharClass *)other;
    if (obj_2->x == 0)
        raise("Cannot divide by 0.");
    return ((Object *)(new(Char, obj_1->x / obj_2->x)));
}

bool CharEqual(const Object *this, const Object *other)
{
    CharClass *obj_1 = NULL;
    CharClass *obj_2 = NULL;

    if (!this || !other)
        raise("Cannot divide by NULL.");
    obj_1 = (CharClass *)this;
    obj_2 = (CharClass *)other;
    return(obj_1->x == obj_2->x ? true : false);
}

bool CharGreaterThan(const Object *this, const Object *other)
{
    CharClass *obj_1 = NULL;
    CharClass *obj_2 = NULL;

    if (!this || !other)
        raise("Cannot divide by NULL.");
    obj_1 = (CharClass *)this;
    obj_2 = (CharClass *)other;
    return(obj_1->x > obj_2->x ? true : false);
}

bool CharLessThan(const Object *this, const Object *other)
{
    CharClass *obj_1 = NULL;
    CharClass *obj_2 = NULL;

    if (!this || !other)
        raise("Cannot divide by NULL.");
    obj_1 = (CharClass *)this;
    obj_2 = (CharClass *)other;
    return(obj_1->x < obj_2->x ? true : false);
}

static const CharClass _description = {
    {
        .__size__ = sizeof(CharClass),
        .__name__ = "Char",
        .__ctor__ = (ctor_t)&Char_ctor,
        .__dtor__ = (dtor_t)&Char_dtor,
        .__str__ = (to_string_t)&DisplayChar,
        .__add__ = (binary_operator_t)&AddChar,
        .__sub__ = (binary_operator_t)&SubChar,
        .__mul__ = (binary_operator_t)&MulChar,
        .__div__ = (binary_operator_t)&DivChar,
        .__eq__ = (binary_comparator_t)&CharEqual,
        .__gt__ = (binary_comparator_t)&CharGreaterThan,
        .__lt__ = (binary_comparator_t)&CharLessThan,
    },
    .x = 0,
};

const Class *Char = (const Class *)&_description;