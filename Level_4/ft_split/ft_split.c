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

char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char **split;

	if(!(split = (char **)malloc(sizeof(char *) * 256)
		return NULL;
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	return(split);
}
