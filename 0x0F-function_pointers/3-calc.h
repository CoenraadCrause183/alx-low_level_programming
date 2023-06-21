#ifndef CALC_H
#define CALC_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - struct op
 *
 * @opp: operator
 *
 * @f: the function
 */

typedef struct opp
{
    char *opp;
    int (*f)(int a, int b);
} op_t;

int op_add(int i1, int i2);
int op_sub(int i1, int i2);
int op_mul(int i1, int i2);
int op_div(int i1, int i2);
int op_mod(int i1, int i2);
int (*get_op_func(char *s))(int, int);

#endif
