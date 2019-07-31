#include <stdio.h>

int     ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}
char *ft_strrev(char *str)
{
    

	int		i;
	int		n;
	char	tmp;

	i = 0;
	n = ft_strlen(str);
	while (n - 1 > i)
	{
		tmp = str[i];
		str[i] = str[n - 1];
		str[n - 1] = tmp;
		n--;
		i++;
	}
	return (str);
}
