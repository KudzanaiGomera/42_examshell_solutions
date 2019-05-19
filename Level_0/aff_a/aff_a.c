/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <kgomera@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 19:04:32 by kgomera           #+#    #+#             */
/*   Updated: 2019/05/19 19:44:16 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int         i;

    i = 0;

    if (argc != 2)
        ft_putchar('\n');
    
    else if (argc == 2)
    {
        while(argv[1][i] != '\0')
        {
            if (argv[1][i] == 'a')
            {
                ft_putchar('a');
                break;
            }
            else
                i++;
        }

        ft_putchar('\n');
    }
    return (0);
}
