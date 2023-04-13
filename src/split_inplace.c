/*
 * E89 Pedagogical & Technical Lab
 * project:     tp get line
 * created on:  2023-02-27 - 09:22 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: split implace
 */

#include "fonction.h"

char *split_inplace(char *str, char token)
{
    while (*str != '\0') {
        if (*str == token) {
            *str = '\0';
            return str + 1;
        }
        str += 1;
    }
    return (NULL);
}
