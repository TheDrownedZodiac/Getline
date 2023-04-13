/*
 * E89 Pedagogical & Technical Lab
 * project:     getline
 * created on:  2023-03-01 - 09:36 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: getline
 */

#include "fonction.h"

char *stu_getline(int fd)
{
    static char *carry = NULL;
    static int pastfd = 0;
    char *str;
    char *temp;

    temp = NULL;
    if (fd != pastfd) {
        pastfd = fd;
        free(carry);
        carry = NULL;
    }
    if (stu_strchr(carry, '\n') != NULL) {
        temp = stu_strdup(carry);
        carry = stu_strdup(split_inplace(temp, '\n'));
        return temp;
    } else if (carry != NULL) {
        temp = stu_strdup(carry);
    }
    str = loop_read_until(fd, '\n');
    carry = stu_strdup(split_inplace(str, '\n'));
    temp = strdupcat(temp, str);
    return temp;
}
