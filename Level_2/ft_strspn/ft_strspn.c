#include <stdio.h>

size_t  ft_strspn(const char *s, const char *accept)
{
    int i;
    int j;
    i =0;
    j = 0;

    while(s[i] != '\0')
    {
        while(accept[j] != '\0')
        {
            if(accept[j] == s[i])
                break;
            j++;
        }
        if(!accept[j])
            break;
        i++;
    }
    return(i);
}