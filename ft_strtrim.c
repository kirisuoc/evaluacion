/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubegar2 <rubegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:05:30 by rubegar2          #+#    #+#             */
/*   Updated: 2024/10/03 11:05:30 by rubegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char const *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*new_str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	i = 0;
	while (ft_is_in_set(set, s1[i]) && s1[i])
		i++;
	while (ft_is_in_set(set, s1[len -1]) && len > i)
		len--;
	new_str = malloc(len - i + 1);
	if (new_str == NULL)
		return (NULL);
	j = 0;
	while (i < len)
	{
		new_str[j] = s1[i];
		i++;
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
}

/*int main(void)
{
	const char s1[20] = "aaaHola Mundobbb";
	const char set[20] = "aaabbb";
	char *result = ft_strtrim(s1,set);

	printf("The string result %s", result);
	free(result);
	return (0);
}*/