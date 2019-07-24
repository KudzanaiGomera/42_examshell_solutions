#include <stdio.h>
#include <string.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int main(int argc, char **argv)
{
	int i;
	int n;

	i = 0;
	n = argc - 1;

	if (argc < 2)
		ft_putchar('\n');
	else
	{
		while(argv[n][i] != '\0'){
			ft_putchar(argv[n][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return(0);
	
}

