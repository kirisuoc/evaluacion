/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubegar2 <rubegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:03:14 by rubegar2          #+#    #+#             */
/*   Updated: 2024/10/03 12:16:28 by rubegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr_s;

	ptr_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr_s[i] = (unsigned char )c;
		i++;
	}
	return (s);
}

/*int main(void)
{
	char s[20] = "Hola Mundo";
	int c;

	c = '0';
	ft_memset(s, c, 5);
	printf("The new is value is %s\n",s);
	return (0);
}*/