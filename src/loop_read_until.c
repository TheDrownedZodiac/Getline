/*
 * E89 Pedagogical & Technical Lab
 * project:     tp getline
 * created on:  2023-02-27 - 11:04 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: loop read
 */

#include "fonction.h"

char *loop_read_until(int fd, char token)
{
    int size;
    char *str;
    char *buffer;

    size = 16;
    buffer = malloc(sizeof(char) * 17);
    str = malloc(sizeof(char) * 1);
    str = 0;
    while (size > 0) {
        size = read(fd, buffer, 16);
        buffer[size] = '\0';
        str = strdupcat(str, buffer);
        if (stu_strchr(buffer, token) != NULL) {
            free(buffer);
            return str;
        }
    }
    free(buffer);
    return str;
}
