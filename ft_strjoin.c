/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubegar2 <rubegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:04:49 by rubegar2          #+#    #+#             */
/*   Updated: 2024/10/03 11:04:50 by rubegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*new_str;
	size_t	s1_len;
	size_t	s2_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_str = malloc(s1_len + s2_len + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		new_str[i] = s1[i];
		i++;
	}
	while (i < s1_len + s2_len)
	{
		new_str[i] = s2[i - s1_len];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*int main(void)
{
	const char s1[] = "Hola";
	const char s2[] = "Mundo";
	char *result = ft_strjoin(s1,s2);
	printf("The new string is %s\n", result);
	free(result);
	return (0);
}*/