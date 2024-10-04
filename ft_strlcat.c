/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubegar2 <rubegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:04:54 by rubegar2          #+#    #+#             */
/*   Updated: 2024/10/03 14:41:21 by rubegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;
	size_t	j;

	i = 0;
	src_len = 0;
	dst_len = 0;
	j = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (dst[dst_len] != '\0' && dst_len < dstsize)
		dst_len++;
	if (dstsize <= dst_len)
		return (dst_len + src_len);
	i = dst_len;
	while (i < dstsize - 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}

/*int main(void)
{
	char src[] = "tal?";
	char dst[15] = "Que ";
	size_t result;

	result = ft_strlcat(dst, src, sizeof(dst));
	printf("The result is %zu\n", result);
	printf("Concatenated string %s", dst);
	return (0);
}*/
