/*
** EPITECH PROJECT, 2019
** matrice.c
** File description:
** Thomas Olry's matrice.c made the 12/01/2019
*/

#include "include/architect.h"

void print_matrice(float *matrice)
{
    for (int i = 0; i != 9; i++) {
        printf("%.2f", matrice[i]);
        if (i == 2 || i == 5 || i == 8)
            printf("\n");
        else
            printf(" ");
    }
}

void check_flags(int ac, char **av, archi_t *res, float *matrice)
{
    for (int i = 0; av[i] != NULL; i++) {
        if (strcmp(av[i], "-t") == 0) {
            check_arg(i, av);
            translation(res, matrice, atof(av[i + 1]), atof(av[i + 2]));
        }
        if (strcmp(av[i], "-z") == 0) {
            check_arg(i, av);
            scaling(res, matrice, atof(av[i + 1]), atof(av[i + 2]));
        }
        if (strcmp(av[i], "-r") == 0) {
            check_angle(i, av);
            rotation(res, matrice, atof(av[i + 1]));
        }
        if (strcmp(av[i], "-s") == 0) {
            check_angle(i, av);
            reflect(res, matrice, atof(av[i + 1]));
        }
    }
}
