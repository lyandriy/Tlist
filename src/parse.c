#include "../include/lib.h"

int parse_input(char *argv)
{
    char        *p_end;
    long int    numb;

    numb = strtol(*argv, &p_endt, 10);
    if (p_end == *argv || *p_end != '\0')
        ft_error("Input must be a number.");
    else if (numb <= 0)
        ft_error("Input must be a positive number.");
    else if (numb > INT_MAX)
        ft_error("Input number is too long.");
    return (int)numb;
}
