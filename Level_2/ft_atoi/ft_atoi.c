#include <unistd.h>

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