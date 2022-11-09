/*
** EPITECH PROJECT, 2022
** bootstrap my ls
** File description:
** bootstrap my ls
*/

#include "../include/my.h"

int main(int argc, char **argv)
{
    if (argc != 2)
        printf("Usage %s <pathname>\n", argv[0]);
    char *dir = argv[1];
    struct stat *buf;
    stat(dir, buf);

    printf("Name: %s\n");
    printf("Type: \n");
    printf("Inode: %d\n", (int)buf->st_ino);
    printf("Hard Link: %d\n", (int)buf->st_nlink);
    printf("Size: %d\n", (int)buf->st_size);
    printf("Allocated space: %lld\n", (long long)buf->st_blksize);
    printf("Minor: \n");
    printf("Major: \n");
    printf("UID: %d\n", (int)buf->st_uid);
    printf("GUID: %d\n", (int)buf->st_gid);

    return 0;
}
