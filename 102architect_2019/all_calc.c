/*
** EPITECH PROJECT, 2019
** all_calc.c
** File description:
** Thomas Olry's all_calc.c made the 12/01/2019
*/

#include "architect.h"

void translation(archi_t *trans, float *matrice, float i, float j)
{
    matrice[2] = i;
    matrice[5] = j;

    trans->x += i;
    trans->y += j;
    printf("Translation along vector (%.0f, %.0f)\n", i, j);
}

void scaling(archi_t *scale, float *matrice, float m, float n)
{
    matrice[0] = m;
    matrice[4] = n;

    scale->x *= m;
    scale->x *= n;
    printf("Scaling by factors %.0f and %.0f\n", m, n);
}

void rotation(archi_t *rotate, float *matrice, float teta)
{
    float x = 0;
    float y = 0;
    float save = 0;

    printf("Rotation by a %.0f degree angle\n", teta);
    teta = (teta * M_PI) / 180;
    x = cos(teta);
    y = sin(teta);

    matrice[0] = x;
    matrice[1] = -y;
    matrice[2] = 0;
    matrice[3] = y;
    matrice[4] = x;
    matrice[5] = 0;

    save = (rotate->x * matrice[0]) + (rotate->y * matrice[1]);
    rotate->y = (rotate->x * matrice[3]) + (rotate->y * matrice[4]);
    rotate->x = save;
}

void reflect(archi_t *rotate, float *matrice, float teta)
{
    float x = 0;
    float y = 0;
    float save = 0;

    printf("Reflection over an axis with an inclination angle of %.0f degrees\n", teta);
    teta = (teta * M_PI) / 180;
    x = cos(2 * teta);
    y = sin(2 * teta);

    matrice[0] = x;
    matrice[1] = y;
    matrice[2] = 0;
    matrice[3] = y;
    matrice[4] = -x;
    matrice[5] = 0;

    save = (rotate->x * matrice[0]) + (rotate->y * matrice[1]);
    rotate->y = (rotate->x * matrice[3]) + (rotate->y * matrice[4]);
    rotate->x = save;
    if (rotate->x > -0.01 && rotate->x < 0)
        rotate->x = 0;
    if (rotate->y > -0.01 && rotate->y < 0)
        rotate->y = 0;
}
