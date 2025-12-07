#ifndef LIB_H
#define LIB_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

typedef struct list
{
    int             numb;
    struct s_list   *next;
} t_list;

void ft_error(void);
int parse_input(char *argv);
void make_prosses(int threads_num, int generate_num);

#endif