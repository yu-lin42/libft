/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:38:44 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/22 01:05:51 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	function_is_a_thing(unsigned int integer, char character)
{
	printf("unsigned int is %d and teh char is %c\n", integer, character);
	return ('w');
}


char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*str;

	if (!s || !f || (!(str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		main(void)
{
	char	(*func1)(unsigned int, char);
	char	*string = strdup("hello world\n");

	func1 = &function_is_a_thing;
	string = ft_strmapi(string, func1);
	printf("%s\n", string);
	return 0;
}











