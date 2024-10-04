/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecousill <ecousill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:05:36 by veragarc          #+#    #+#             */
/*   Updated: 2024/09/27 18:00:52 by ecousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	j;
	size_t	d;

	i = 0;
	count = 0;
	d = 0;
	if (*s == '\0')
		return (0);
	j = ft_strlen(s);
	while (i < j)
	{
		if (s[i] == c && s[i + 1] != c && i != j - 1)
			count++;
		else if (s[i] != c && i == 0)
			count++;
		else if (s[i] != c)
			d++;
		i++;
	}
	if (d == j)
		return (1);
	return (count);
}

static char	**aux_book(int i, int j, int len, char **res)
{
	res[i] = (char *)malloc((len + 1) * sizeof(char));
	if (res[i] == NULL)
	{
		while (res[j] != NULL)
		{
			free(res[j]);
			j++;
		}
		return (NULL);
	}
	return (res);
}

static char	**book_memory(char const *s, int count, char c, char **res)
{
	int		i;
	int		j;
	int		len;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (i < count)
	{
		len = 0;
		while (s[len + k] == c && s[len + k] != '\0')
			k++;
		while (s[len + k] != c && s[len + k] != '\0')
			len++;
		k = len + k;
		res = aux_book(i, j, len, res);
		i++;
	}
	if (res != NULL)
		res[i] = NULL;
	return (res);
}

static char	**aux_split(char const *s, char **res, char c)
{
	size_t	i;
	size_t	j;
	int		cont;

	i = 0;
	j = 0;
	cont = 0;
	while (j < ft_strlen(s))
	{
		if (s[j] != c && s[j + 1] != c)
		{
			res[cont][i] = s[j];
			i++;
		}
		else if (s[j] != c)
		{
			res[cont][i] = s[j];
			i++;
			res[cont][i] = '\0';
			cont++;
			i = 0;
		}
		j++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**def;
	char	**res;
	size_t	w;

	if (s == NULL)
		return (NULL);
	w = count_words(s, c);
	res = (char **)malloc((w + 1) * sizeof(char *));
	if (res == NULL)
	{
		free(res);
		return (NULL);
	}
	res = book_memory(s, w, c, res);
	if (res != NULL)
	{
		def = aux_split(s, res, c);
		return (def);
	}
	return (res);
}

/*int	main(void)
{
	//const char str[] = "    ";

	//const char *str = NULL;
	//char c = ' ';
	char **r = ft_split(" a b c d    ", ' ');
    size_t i = 0;
    size_t j = count_words(" a b c d     ", ' ');
    printf("Numero de palabras: %d\n", (int)j);
	//printf(" %s\n", r[i]);
    while (i < j)
    {
        printf("%s\n", r[i]);
        i++;
    }
	printf(" %s\n", r[i]);
}*/
