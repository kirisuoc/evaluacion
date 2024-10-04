/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubegar2 <rubegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:02:19 by rubegar2          #+#    #+#             */
/*   Updated: 2024/10/03 11:37:16 by rubegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
	char	c;

	c = 241;
	if (ft_isascii(c))
	{
		printf("the caracther is ascii %c\n", c);
	}
	else
	{
		printf("the caracther is not ascii %c\n ", c);
	}
	return (0);
}*/
