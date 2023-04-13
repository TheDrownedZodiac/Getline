/*
 * E89 Pedagogical & Technical Lab
 * project:     getline
 * created on:  2023-03-01 - 09:35 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: getline
 */

#include "fonction.h"

Test(getline, easy) {
    int fd;
    char *str;
    int i = 0;

    fd = open("file.txt", O_RDONLY);
    while (i < 5) {
        str = stu_getline(fd);
        write(1, str, stu_strlen(str));
        i += 1;
    }
    //cr_assert_str_eq(str, "Elle doit replacer la premiere occurrence de token par un 0 et r");
    close(fd);
    free(str);
}
