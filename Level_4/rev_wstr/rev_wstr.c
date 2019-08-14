/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 14:46:58 by kgomera           #+#    #+#             */
/*   Updated: 2019/08/14 15:57:09 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}
	return(i);
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	
	i = (ft_strlen(argv[1])) - 1;
	if(argc == 2)
	{
		while(i >= 0)
		{
			if (argv[1][i] == 32 || argv[1][i] == '\t' || i == 0)
			{
				if (i > 0)
					j = i + 1;
				else
					j = 0;
				while(argv[1][j] != 32 && argv[1][j] != '\t' && argv[1][j])
				{
						ft_putchar(argv[1][j]);
						j++;
				}
				if (i > 0)
					ft_putchar(argv[1][i]);
			}
			i--;
		}
	}
	ft_putchar('\n');
	return (0);
}
