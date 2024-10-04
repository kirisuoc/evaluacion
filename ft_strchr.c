/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubegar2 <rubegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:04:33 by rubegar2          #+#    #+#             */
/*   Updated: 2024/10/03 18:28:55 by rubegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (NULL);
}
/*int main(void)
{
	const char *s;
	int c;

	s = "Hola Mundo";
	c = 'M';
	ft_strchr(s, c);

	if(ft_strchr(s,c))
	{
		printf("return is %s",ft_strchr(s,c));
	}
	else
	{
		printf("caracter not found\n");
	}
	return (0);
}*/
