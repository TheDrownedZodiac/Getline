/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-11-25 - 14:45 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: strcat
 */

#include <stddef.h>

int stu_strlen(const char *str);

char *stu_strcat(char *dest, const char *src)
{
    int i;
    int j;

    if (dest == NULL && src == NULL) {
        return NULL;
    } else if (dest == NULL) {
        return (char *) src;
    } else if (src == NULL) {
        return dest;
    }
    i = stu_strlen(dest);
    j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i += 1;
        j += 1;
    }
    dest[i] = '\0';
    return dest;
}
