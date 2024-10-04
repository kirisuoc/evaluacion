/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubegar2 <rubegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:05:25 by rubegar2          #+#    #+#             */
/*   Updated: 2024/10/03 14:27:06 by rubegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *) s + i);
		}
		i--;
	}
	return (NULL);
}

/*int  main(void)
{
	const char *s;
	int c;

	s = "Hola Mundo";
	c = 'n';
	if(ft_strrchr(s,c))
	{
		printf("return is %s",ft_strrchr(s,c));
	}
	else
	{
		printf("caracter not found");
	}
	return (0);
}*/