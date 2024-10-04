/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubegar2 <rubegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:04:43 by rubegar2          #+#    #+#             */
/*   Updated: 2024/10/04 09:10:14 by rubegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	ft_letter_tonumber(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'A' && *c <= 'Z')
	{
		*c = *c - 'A' + 1;
	}
	else if (*c >= 'a' && *c <= 'z')
	{
		*c = *c - 'a' + 1;
	}
	else
	{
		*c = 0;
	}
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*int main()
{
	char s[20] = "adios";
	int i;

	ft_striteri(s,ft_letter_tonumber);

	i = 0;
	while(s[i] != '\0')
	{
		printf("%d ",s[i]);
		i++;
	}
	printf("\n");

	return (0);
}*/