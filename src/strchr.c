/*
 * E89 Pedagogical & Technical Lab
 * project:     strchr
 * created on:  2023-01-30 - 09:28 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: day4
 */

#include <stddef.h>

char *stu_strchr(const char *str, char search)
{
    int i;

    i = 0;
    if (str == NULL) {
        return NULL;
    }
    while (str[i] != '\0') {
        if (str[i] == search) {
            return (char *) str;
        }
        i += 1;
    }
    return NULL;
}

