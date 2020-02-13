#include <criterion/criterion.h>

#include "../new.h"
#include "../player.h"
#include "../point.h"
#include "../char.h"
#include "../vertex.h"
#include "../int.h"
#include "../float.h"
#include "../array.h"

Test(test_rush, new_test)
{
    Object  *player = new(Player);

    cr_expect_not_null(player);
    delete(player);
}

Test(test_rush, print_str_player)
{
    Object  *player = new(Player);
    char *buff = str(player);

    cr_assert_str_eq("Player", buff);
    delete(player);
}

Test(test_rush, test_point)
{
    Object  *point = new(Point, 5, -6);
    char *buff = str(point);

    cr_assert_str_eq("<Point (5, -6)>", buff);
    delete(point);
}

Test(test_rush, test_vertex)
{
    Object  *vertex = new(Vertex, 10, 999, -5);
    char *buff = str(vertex);

    cr_assert_str_eq("<Vertex (10, 999, -5)>", buff);
    delete(vertex);
}

Test(test_rush, test_int)
{
    Object  *my_int = new(Int, 10);
    char *buff = str(my_int);

    cr_assert_str_eq("<Int (10)>", buff);
    delete(my_int);
}

Test(test_rush, test_float)
{
    Object  *my_float = new(Float, 12.567);
    char *buff = str(my_float);

    cr_assert_str_eq("<Float (12.567000)>", buff);
    delete(my_float);
}

Test(test_rush, test_char)
{
    Object  *my_char = new(Char, 'b');
    char *buff = str(my_char);

    cr_assert_str_eq("<Char (b)>", buff);
    delete(my_char);
}