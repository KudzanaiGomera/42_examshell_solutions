#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;
    i = 0;
    if (argc != 2)
        ft_putchar('\n');
    else
    {
        while(argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                ft_putchar('M'-(argv[1][i] - 'N'));
            else if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
                ft_putchar('m' - (argv[1][i] -'n'));
            else
            {
                ft_putchar(argv[1][i]);
            }
            i++;
            
        }
        ft_putchar('\n');
    }
    return (0);
}