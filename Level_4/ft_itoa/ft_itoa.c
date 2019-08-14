/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 09:20:20 by kgomera           #+#    #+#             */
/*   Updated: 2019/08/14 11:12:29 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	digits(int n)
{
	size_t i;
	i = 1;
	while(n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	size_t len;
	char *str;
	unsigned int nbr;

	len = digits(n);
	nbr = n;

	if (n < 0)
	{
		nbr = '-';
		len++;
	}
	if(!(str = (char *)malloc (sizeof(char)* len)))
		return(NULL);
	str[--len] = (nbr % 10) + 48;
	while(nbr /= 10)
		str[--len] = (nbr % 10) + '0';
	if (n < 0)
		str[0] = '-';
	return(str);
}
int main(void)
{
	int i = -30002;
	printf("%s\n", ft_itoa(i));
	return(0);
}
