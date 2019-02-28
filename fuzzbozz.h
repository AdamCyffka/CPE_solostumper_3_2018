/*
** EPITECH PROJECT, 2019
** fuzzbozz.h
** File description:
** fuzzbozz.h
*/

#ifndef FUZZBOZZ
#define FUZZBOZZ

#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av);

int error(void);

void my_putchar(char c);

int my_putstr(char const *str);

int my_getnbr(char *str);

int my_put_nbr(int nb);

int start(int from, int to);

int check_core(int nb);

int check_core2(int nb);

#endif /* FUZZBOZZ */
