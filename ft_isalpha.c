/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubegar2 <rubegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:02:13 by rubegar2          #+#    #+#             */
/*   Updated: 2024/10/03 11:33:39 by rubegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*int	main(void)
{
	char c;

	c = 'f';
	if (ft_isalpha(c))
	{
		printf("the caracter is alphabet %c\n", c);
	}
	else
	{
		printf ("the caracter is not alphabet %c\n", c);
	}
	return (0);
}*/
