/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubegar2 <rubegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:05:14 by rubegar2          #+#    #+#             */
/*   Updated: 2024/10/03 11:05:15 by rubegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	}
	return (0);
}

/*int main(void)
{
	char s1[] = "Hola Mundo";
	char s2[] = "Hola Mundo";
	int result = ft_strncmp(s1,s2,6);

	if(result == 0)
	{
		printf("They are equal");
	}
	else if(result > 0)
	{
		printf("s1 is larger than s2");
	}
	else
	{
		printf("s2 is larger than s1");
	}
	return (0);
}*/