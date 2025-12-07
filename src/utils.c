#include "../include/lib.h"

void ft_error(char *str)
{
    fprintf(stderr, "ERROR. ");
    fprintf(stderr, str);
    fprintf(stderr, "\n");
    exit (1);
}