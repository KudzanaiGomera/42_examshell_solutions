/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 09:18:05 by kgomera           #+#    #+#             */
/*   Updated: 2019/08/13 09:18:08 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
int main(int argc, char ** argv)
{
    int i;
    int j;

    i = 0;
    if (argc > 1)
    {
        while(argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        j = i;
        while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
            i++;
        while(argv[1][i])
        {
            if (argv[1][i] != ' ' && argv[1][i] != '\t' && (argv[1][i - 1] == ' ' || argv[1][i - 1] == '\t'))
            {
                
                while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
                    ft_putchar(argv[1][i++]);
                write(1,"  ",1);
            }
            i++;
        }
        while(argv[1][j] && argv[1][j] != ' ' && argv[1][j] != '\t')
            ft_putchar(argv[1][j++]);

    }
    ft_putchar('\n');
    return(0);
}