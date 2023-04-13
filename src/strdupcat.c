/*
 * E89 Pedagogical & Technical Lab
 * project:     tp getline
 * created on:  2023-02-27 - 09:57 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: strdupcat
 */

#include "fonction.h"

char *strdupcat(const char *s1, const char *s2)
{
    char *str;

    if (s1 == NULL && s2 == NULL) {
        return NULL;
    } else if (s1 == NULL) {
        return stu_strdup(s2);
    } else if (s2 == NULL) {
        return stu_strdup(s1);
    }
    str = malloc(sizeof(char) * (stu_strlen(s1) + stu_strlen(s2) + 1));
    stu_strcpy(str, s1);
    stu_strcat(str, s2);
    return str;
}
