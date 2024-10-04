/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubegar2 <rubegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:02:44 by rubegar2          #+#    #+#             */
/*   Updated: 2024/10/03 12:45:04 by rubegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return ((void *)(ptr + i));
		}
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	char s[20] = "Hola Mundo";
	int c;

	c = 'M';
	char *result = ft_memchr(s, c, 6);
	if(result != NULL)
	{
		printf("match in caracter %c %s", c, result);
	}
	else
	{
		printf("no caracter match");
	}
	return (0);
}*/