#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
int count(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    else
        return 0;
}
int	ft_atoi(const char *str)
{
    int i;
    int n;

    i = 0;
    while((*str >= '\t' && *str <= '\r') || *str == 32)
        str++;
    if (*str == '-')
        n = -1;
    else
        n = 1;
    while (*str == '-' || *str =='+')
        str++;
    while(*str&& count(*str))
        i = (i * 10) + (*str++ - '0');
    return(i * n);
}
int main(int argc, char *argv[])
{
    int val;
    int val2;
    int results;

    results =0;
    if (argc != 4)
        ft_putchar('\n');
    else
    {
        if (argv[2][1] == '\0')
        {
             val = ft_atoi(argv[1]);
             val2 = ft_atoi(argv[3]);

            if(argv[2][0] == '+')
                results = val + val2;
            else if (argv[2][0] == '-')
                results = val - val2;
            else if (argv[2][0] == '*')
                results = val * val2;
            else if (argv[2][0] == '/')
                results = val / val2;
            else if (argv[2][0] == '%')
                results = val % val2;
            printf("%i\n", results);
        }
    }
    
    return (0);
}