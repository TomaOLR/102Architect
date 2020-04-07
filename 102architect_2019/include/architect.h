/*
** EPITECH PROJECT, 2019
** math.h
** File description:
** Thomas Olry's math.h made the 11/29/2019
*/

#ifndef ARCHITECT_H_
#define ARCHITECT_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct archi_s {
    float x;
    float y;
} archi_t;

archi_t *vector(float, float);

void translation(archi_t *, float *, float, float);
void scaling(archi_t *, float *, float, float);
void rotation(archi_t *, float *, float);
void reflect(archi_t *, float *, float);

void print_matrice(float *);
void check_flags(int, char **, archi_t *, float *);

int check_arg(int, char **);
int check_angle(int, char **);
int check_error(int, char **);
int is_num(char *);
#endif /* ARCHITECT_H_ */
