/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 15:56:22 by kgomera           #+#    #+#             */
/*   Updated: 2019/08/12 16:26:02 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	unsigned int j;
	unsigned int temp;

	while(i < size - 1)
	{
		j = i;
		while(j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
int main(void)
{
	int arr[] = { 3,1,4,5,2,9,7};
	int n = 0;

	while(n < 7)
	{
		printf("%d", sort_int_tab(&arr[n], 7));
		n++;
	}
	return(0);
}
