/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubegar2 <rubegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:02:33 by rubegar2          #+#    #+#             */
/*   Updated: 2024/10/03 11:46:33 by rubegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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

	c = 'A';
	if (ft_isprint(c))
	{
		printf("is printable %c\n", c);
	}
	else
	{
		printf("is not printable %c\n", c);
	}
	return (0);
}*/
