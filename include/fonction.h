/*
 * E89 Pedagogical & Technical Lab
 * project:     fonction
 * created on:  2023-02-06 - 17:03 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: fonction
 */

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <signal.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <lapin.h>
#include "struct.h"

#ifndef STU_H_

#define STU_H_

char *stu_strcpy(char *dest, const char *src);
char *split_inplace(char *str, char token);
char *stu_strcat(char *dest, const char *src);
int stu_strlen(const char *str);
char *strdupcat(const char *s1, const char *s2);
char *loop_read_until(int fd, char token);
char *stu_strchr(const char *str, char search);
char *stu_getline(int fd);
char *stu_strdup(const char *src);

#endif
