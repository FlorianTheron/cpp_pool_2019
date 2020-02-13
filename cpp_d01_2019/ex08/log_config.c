/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** log_config
*/

#include "log.h"

log_config_t *get_log_config(void)
{
    static log_config_t *config;

    return (config);
}

enum log_level get_log_level(void)
{
    return (get_log_config()->level);
}

enum log_level set_log_level(enum log_level level)
{
    get_log_config()->level = level;
    return (get_log_config()->level);
}

int set_log_file(const char *file)
{
    if (get_log_config()->fd != 0)
        if (close(get_log_config()->fd) < 0)
            return (1);
    get_log_config()->log_file = file;
    return (0);
}

int close_log_file(void)
{
    if (get_log_config()->fd != 0)
        if (close(get_log_config()->fd) < 0)
            return (1);
    return (0);
}