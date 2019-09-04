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
	int tmp;

	while(i < size - 1)
	{
		j = i;
		
		while(j < size)
		{
			if(tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
int main(void)
{
	int arr[] = { 2,7,3,1,9,3};
	int size = sizeof(arr)/sizeof(arr[0]);
	int i = 0;
	
	sort_int_tab(arr, size);
	while(i < 6)
	{
		printf("%i", arr[i]);
		i++;
	}
	return (0);
}
