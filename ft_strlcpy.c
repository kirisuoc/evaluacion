/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubegar2 <rubegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:04:58 by rubegar2          #+#    #+#             */
/*   Updated: 2024/10/03 12:22:45 by rubegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (dstsize == 0)
	{
		return (src_len);
	}
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
	{
		dst[i] = '\0';
	}
	return (src_len);
}
/*int main(void)
{
	char src[] = "Hola mundo";
	char dest[20];
	char dest_small[5];
	size_t result;

	result = ft_strlcpy(dest,src, sizeof(dest));
	printf("Copy Complete:\n Dest: %s\n length of src:%zu\n", dest, result);

	result = ft_strlcpy(dest_small,src, sizeof(dest_small));
	printf("Not Complete:\n Dest: %s\n length of src:%zu\n", dest_small, result);

	return (0);
}*/
