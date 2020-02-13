/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** log
*/

#include "log.h"

int log_to_stdout(void)
{
    return (0);
}

int log_to_stderr(void)
{
    return (0);
}

void log_msg(enum log_level level, const char *fmt, ...)
{
    if (level < get_log_config()->level)
        return;
}