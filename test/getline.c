/*
 * E89 Pedagogical & Technical Lab
 * project:     getline
 * created on:  2023-03-01 - 09:35 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: getline
 */

#include "fonction.h"

Test(getline, easy) {
    char *str;
    int fd1;
    int fd2;

    fd1 = open("file.txt", O_RDONLY);
    fd2 = open("file2.txt", O_RDONLY);
    str = stu_getline(fd1);
    cr_assert_str_eq(str, "bonjour");
    str = stu_getline(fd1);
    cr_assert_str_eq(str, "tous le monde !");
    str = stu_getline(fd1);
    cr_assert_str_eq(str, "ceci est un");
    str = stu_getline(fd1);
    cr_assert_str_eq(str, "test de getline");
    str = stu_getline(fd1);
    cr_assert_str_eq(str, "getline() reads an entire line from stream, \
storing the address of the buffer containing the text into *lineptr. \
The buffer is null-terminated and includes the newline character, if one was found.");
    str = stu_getline(fd2);
    cr_assert_str_eq(str, "hello");
    str = stu_getline(fd2);
    cr_assert_str_eq(str, "E89 Pedagogical & Technical Lab");
    str = stu_getline(fd2);
    cr_assert_str_eq(str, "project:     tp getline");
    str = stu_getline(fd2);
    cr_assert_str_eq(str, "created on:  2023-02-27 - 09:57 +0100");
    close(fd1);
    close(fd2);
}
