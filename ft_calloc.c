/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubegar2 <rubegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:01:59 by rubegar2          #+#    #+#             */
/*   Updated: 2024/10/03 11:02:01 by rubegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	totalsize;

	totalsize = nmemb * size;
	ptr = malloc(totalsize);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, totalsize);
	return (ptr);
}
/*int main(void)
{
	int *s;
	size_t n = 5;
	size_t i = 0;

	s = (int *)ft_calloc(n,sizeof(int));
	if(s == NULL)
	{
		printf("Could not allocate memory\n");
		return (1);
	}
	while(i < n)
	{
		printf("s[%zu] = %d\n", i, s[i]);
		i++;
	}
	free(s);
	return (0);
}*/