/*
** EPITECH PROJECT, 2019
** useful
** File description:
** useful functions
*/

#include "fuzzbozz.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}

int my_getnbr(char *str)
{
    int nb = 0;

    for (int i = 0; str[i]; i++)
        nb = nb * 10 + str[i] - '0';
    return (nb);
}

int my_put_nbr(int nb)
{
    int	d;

    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    if (nb > 9)
        my_put_nbr(nb / 10);
    d = nb % 10 + 48;
    my_putchar(d);
    return (0);
}
