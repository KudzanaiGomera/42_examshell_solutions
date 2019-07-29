#include <stdio.h>

char    *ft_strdup(char *src)
{
	char *dst;
	int i;

	i = 0;
	while(src[i] != '\0')
		i++;
	i++;
	dst = (char *)malloc(sizeof(char)* i);
	while(i >= 0)
	{
		dst[i] = src[i];
		i--;
	}
	return (dst);
}


