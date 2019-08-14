/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 08:44:15 by kgomera           #+#    #+#             */
/*   Updated: 2019/08/14 09:06:20 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int count(int c)
{
	if(c >= '0' && c <= '9')
		return(1);
	else
		return(0);
}

int	ft_atoi(char *str)
{
	int i;
	int n;

	i = 0;
	while((*str >= '\t' && *str <= '\r' ) || *str == 32)
		str++;
	if(*str == '-')
		n = -1;
	else
		n = 1;
	while(*str == '-' || *str == '+')
		str++;
	while(*str&&count(*str))
		i = (i * 10) + (*str++ - '0');
	return(i * n);
}

int main(int argc, char **argv)
{
	int i;
	int nbr;

	if (argc == 2)
	{
		i = 1;
		nbr = ft_atoi(argv[1]);
		if (nbr == 1)
			printf("1");
		while (nbr >= ++i)
		{
			if(nbr % i == 0)
			{
				printf("%d", i);
				if (nbr == i)
					break;
				printf("*");
				nbr/= i;
				i = 1;
			}
		}

	}
	printf("\n");
	return (0);
}
