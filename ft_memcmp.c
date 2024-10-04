/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubegar2 <rubegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:02:52 by rubegar2          #+#    #+#             */
/*   Updated: 2024/10/03 12:18:17 by rubegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr_1;
	unsigned char	*ptr_2;

	ptr_1 = (unsigned char *)s1;
	ptr_2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr_1[i] != ptr_2[i])
		{
			return (ptr_1[i] - ptr_2[i]);
		}
		i++;
	}
	return (0);
}

/*int main(void)
{
	char s1[20] = "Hol";
	char s2[20] = "Hol";
	int result = ft_memcmp(s1,s2,5);
	
	if(result == 0)
	{
		printf("memory equal");
	}
	else if(result > 0)
	{
		printf("s1 memory is larger");
	}
	else
	{
		printf("s2 memory is larger");
	}
	return (0);
}*/