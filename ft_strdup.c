/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubegar2 <rubegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:04:38 by rubegar2          #+#    #+#             */
/*   Updated: 2024/10/03 11:04:39 by rubegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*new;

	i = 0;
	new = (char *) malloc (ft_strlen(s) + 1);
	if (new == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*int main(void)
{
	const char *s = "Hola Mundo";
	char *result = ft_strdup(s);

	if(result == NULL)
	{
		printf("Error! could not allocate memory\n");
		return (1);
	}

	printf("result now is %s", result);
	free(result);
	return (0);
}*/