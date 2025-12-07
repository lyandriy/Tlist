#include "../include/lib.h"

int main(int argc, char **argv)
{
    int threads_num;
    int generate_num;

    if(argc == 3)
    {
        threads_num = parse_input(argv[1]);
        generate_num = parse_input(argv[2]);
        make_prosses(generate_num, threads_num);
    }
    else
        ft_error("You must enter exactly two numbers.");
    return(0);
}
