/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 14:50:16 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/22 00:56:53 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	function(char *string)
{
	printf("%s\n", string);
}

void	ft_striter(char *s, void (*f)(char *))
{
	unsigned long i;

	if (s && f)
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(&s[i]);
			i++;
		}
	}
}

int	main(void)
{
	void	(*funct1)(char *);

	funct1 = &function;
	ft_striter("Hello world", funct1);
	return 0;
}










