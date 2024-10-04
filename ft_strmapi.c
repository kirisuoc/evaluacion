/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubegar2 <rubegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:05:08 by rubegar2          #+#    #+#             */
/*   Updated: 2024/10/03 11:31:36 by rubegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static char	f(unsigned int i, char c)
{
	(void)i;
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 1);
	else if (c >= 'a' && c <= 'z')
		return (c - 'a' + 1);
	else
		return (0);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_s;
	unsigned int	i;
	size_t			len;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s) + 1;
	new_s = malloc(sizeof(char) * len);
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
/*int main(void)
{
	char s[20] = "hola";
	char *result = (ft_strmapi(s, f));
	int i = 0;

	while(result[i] != '\0')
	{
		printf("%d ", result[i]);
		i++;
	}
	printf("\n");
	
	free(result);
	return (0);
}*/