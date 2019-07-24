#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + 48);
}

char	*fizz_buzz(int i)
{
	if (i % 3 == 0)
	{
		if ((i % 5) == 0)
			return ("fizzbuzz");
		else
			return ("fizz");
	}
	else if (i % 5 == 0)
		return ("buzz");
	return (NULL);
}

int		main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (fizz_buzz(i) != NULL)
			ft_putstr(fizz_buzz(i));
		else
			ft_putnbr(i);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
