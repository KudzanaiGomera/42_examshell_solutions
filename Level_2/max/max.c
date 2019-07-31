#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    int i = 0;
    int max_value;

    if(!tab)
        return(0);
    while(len--)
    {
        if (tab[i] < tab[i + 1])
            max_value = tab[i];
        i++;
    }
    return (max_value);
}