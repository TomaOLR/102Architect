/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** Thomas Olry's main.c made the 12/01/2019
*/

#include "architect.h"

archi_t *vector(float x, float y)
{
    archi_t *res = malloc(sizeof(*res));

    res->x = x;
    res->y = y;

    return (res);
}

int main(int ac, char **av)
{

    float matrice[9] = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    archi_t *res;
    float x = 0;
    float y = 0;
    check_error(ac, av);
    x = atof(av[1]);
    y = atof(av[2]);
    res = vector(atof(av[1]), atof(av[2]));
    check_flags(ac, av, res, matrice);
    print_matrice(matrice);
    printf("(%.2f, %.2f) => (%.2f, %.2f)\n", x, y, res->x, res->y);
}
