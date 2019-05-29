/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 08:32:10 by yu-lin            #+#    #+#             */
/*   Updated: 2019/05/29 10:08:51 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(int ac, char* av[])
{
	if (ac == 1)
	{
		int i;
		
		i = 0;
		while (av[i])
		{
			ft_putchar(ft_toupper(*av[i]));
			i++;
		}
	}
	else
		printf("Try again");
	return (0);
}
