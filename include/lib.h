#ifndef LIB_H
#define LIB_H

typedef struct list
{
    int             numb;
    struct s_list   *next;
} t_list;

void ft_error(void);
void parse_input(char **argv, int *generate_num, int *threads_num);
void make_prosses(int generate_num, int threads_num);

#endif