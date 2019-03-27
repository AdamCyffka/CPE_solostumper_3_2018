/*
** EPITECH PROJECT, 2019
** program.c
** File description:
** functions for main program
*/  

#include "fuzzbozz.h"

int check_core2(int nb)
{
    if (nb % 2 == 0)
        my_putstr("Fuzz\n");
    else {
        my_put_nbr(nb);
        my_putchar('\n');
    }
    return (0);
}

int check_core(int nb)
{
    if (nb % 3 == 0 && nb % 2 == 0)
        my_putstr("FuzzBozz\n");
    else if (nb % 3 == 0)
        my_putstr("Bozz\n");
    else
        check_core2(nb);
    return (0);
}

int start(int from, int to)
{
    int i = from;

    while (i != to + 1) {
        check_core(i);
        ++i;
    }
    return (0);
}
