/*
** EPITECH PROJECT, 2020
** cpp_rush1_2019
** File description:
** list
*/

#include "list.h"
#include "new.h"

typedef struct
{
    Container base;
    Class *_type;
    Object *_node;
    Object *_next;
} ListClass;

typedef struct
{
    Iterator base;
    ListClass *_head;
    ListClass *_list;
} ListIteratorClass;

static void ListIterator_ctor(ListIteratorClass *this, va_list *args)
{
    this->_head = va_arg(*args, ListClass *);
    this->_list = this->_head;
}

static const ListIteratorClass ListIteratorDesc = {
    {
        {
            .__size__ = sizeof(ListIteratorClass),
            .__name__ = "ListIterator",
            .__ctor__ = (ctor_t)&ListIterator_ctor,
            .__dtor__ = NULL,
            .__str__ = NULL,
            .__add__ = NULL,
            .__sub__ = NULL,
            .__mul__ = NULL,
            .__div__ = NULL,
            .__eq__ = NULL,
            .__gt__ = NULL,
            .__lt__ = NULL
        },
        .__incr__ = NULL,
        .__getval__ = NULL,
        .__setval__ = NULL
    },
    ._list = NULL,
    ._head = NULL,
};

static const Class *ListIterator = (const Class *)&ListIteratorDesc;

static void List_ctor(ListClass *this, va_list *args)
{
    if (!this)
        raise("ListClass cannot be NULL.");
    this->_type = va_arg(*args, Class *);
    this->_next = NULL;
    this->_node = new(this->_type, args);
}

static void List_dtor(ListClass *this)
{
    Object *tmp = NULL;

    while (this->_node) {
        tmp = this->_node;
        this->_node = this->_next;
        free(tmp);
    }
}

static void List_add(ListClass *this, ...)
{
    Object *tmp = NULL;
    va_list list;

    if (!this)
        raise("ListClass cannot be NULL.");
    tmp = this->_node;
    while (this->_node)
        this->_node = this->_next;
    va_start(list, this);
    this->_node = va_new(va_arg(list, Class *), &list);
    va_end(list);
    this->_node = tmp;
}

static const ListClass ListDesc = {
    {
        {
            .__size__ = sizeof(ListClass),
            .__name__ = "List",
            .__ctor__ = (ctor_t)&List_ctor,
            .__dtor__ = (dtor_t)&List_dtor,
            .__str__ = NULL,
            .__add__ = NULL,
            .__sub__ = NULL,
            .__mul__ = NULL,
            .__div__ = NULL,
            .__eq__ = NULL,
            .__gt__ = NULL,
            .__lt__ = NULL,
        },
        .__len__ = NULL,
        .__begin__ = NULL,
        .__end__ = NULL,
        .__getitem__ = NULL,
        .__setitem__ = NULL,
    },
    ._type = NULL,
    ._next = NULL,
    ._node = NULL,
};

const Class *List = (const Class *)&ListDesc;