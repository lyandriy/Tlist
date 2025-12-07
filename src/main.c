#include "../include/lib.h"

int main(int argc, char **argv)
{
    int threads_num;
    int generate_num;

    if(argc == 3)
    {
        parse_input(argv, &generate_num, &threads_num);
        make_prosses(generate_num, threads_num);
    }
    else
        ft_error();
    return(0);
}
