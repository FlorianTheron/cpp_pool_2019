/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** log
*/

#include <stdio.h>
#include <unistd.h>

#ifndef LOG_H_
#define LOG_H_

enum log_level {
    DEBUG,
    INFO,
    NOTICE,
    WARNING,
    ERROR
};

typedef struct log_config_s {
    enum log_level level;
    int output;
    int fd;
    const char *log_file;
} log_config_t;

log_config_t *get_log_config(void);

#endif /* !LOG_H_ */