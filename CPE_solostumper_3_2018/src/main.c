/*
** EPITECH PROJECT, 2019
** main
** File description:
** main for fuzzbozz
*/

#include "fuzzbozz.h"

int main(int ac, char **av)
{
    if (ac != 3)
        return (84);
    if (my_getnbr(av[1]) > my_getnbr(av[2])) {
        error();
        return (84);
    } else {
        int from = my_getnbr(av[1]);
        int to = my_getnbr(av[2]);
        start(from, to);
        return (0);
    }
}
