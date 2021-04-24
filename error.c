/*
** EPITECH PROJECT, 2019
** error.c
** File description:
** Thomas Olry's error.c made the 12/01/2019
*/

#include "include/architect.h"

int check_arg(int i, char **av)
{
    if (av[i + 1] == NULL || av[i + 2] == NULL)
        exit (84);
    if (is_num(av[i + 1]) == 84 && is_num(av[i + 2]) == 84)
        exit (84);
    if (av[i + 3] != NULL && is_num(av[i + 3]) == 0)
        exit (84);
}

int check_angle(int i, char **av)
{
    if (av[i + 1] == NULL)
        exit (84);
    if (is_num(av[i + 1]) == 84 && is_num(av[i + 2]) == 84)
        exit (84);
    if (av[i + 2] != NULL && is_num(av[i + 2]) == 0)
        exit (84);
}

int check_error(int ac, char **av)
{
    if (ac < 5 || ac == 1)
        exit (84);
    else if (is_num(av[1]) == 84|| is_num(av[2]) == 84)
        exit (84);
}

int is_num(char *arg)
{
    for (int i = 0; arg[i] != '\0'; i += 1) {
        if (!(arg[i] >= '0' && arg[i] <= '9') && arg[i] != '-' && arg[i] != '.' && arg[i] != ' ')
            return (84);
    }
    return (0);
}
