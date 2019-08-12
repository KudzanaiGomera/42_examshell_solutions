/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 16:27:11 by kgomera           #+#    #+#             */
/*   Updated: 2019/08/12 16:34:39 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str)
{
	int i = 0;
	int k = 0;
	int j;
	char **split;

	if(!(split = (char **)malloc(sizeof(char *) * 256)))
		return NULL;
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while(str[i])
	{
		j = 0;
		if(!(split[k] = (char **)malloc(sizeof(char *) * 1096)))
			return NULL;
		while(str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
		{
			split[k][j++] = str[i++];
		}
		while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		split[k][j] == '\0';
		k++;
	}
	split[k] = NULL;
	return(split);
}
