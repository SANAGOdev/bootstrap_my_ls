/*
** EPITECH PROJECT, 2022
** bootstrap my ls
** File description:
** info file
*/

#include "../include/my.h"

void filter_name(char *string)
{
    int i = 0, j = 0;

    for (i; i < strlen(string); i++) {
        if (string[i] == '/') {
            j = i;
        }
    }
    for (int k = j + 1; string[k] != '\0'; k++) {
        putchar(string[k]);
    }
    putchar('\n');
}
