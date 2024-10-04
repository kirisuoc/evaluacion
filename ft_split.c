/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubegar2 <rubegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:04:28 by rubegar2          #+#    #+#             */
/*   Updated: 2024/10/03 18:25:35 by rubegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_memory_alloc(const char *s, char c)
{
	int		len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	word[len] = '\0';
	while (--len >= 0)
		word[len] = s[len];
	return (word);
}

static void	ft_free_memory(char **result, int i)
{
	while (i >= 0)
		free(result[i--]);
	free(result);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**result;

	i = 0;
	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!result)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			result[i] = ft_memory_alloc(s, c);
			if (!result[i])
				return (ft_free_memory(result, i - 1), NULL);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	result[i] = NULL;
	return (result);
}

/*int main(void)
{
	char const s[] = "Hola,Mundo,Adios";
	char c = ',';
	int i = 0;
	char **result = ft_split(s, c);

	while(result[i])
	{
		printf("The substring %d %s\n", i, result[i]);
		i++;
	}

	i = 0;
	while(result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/