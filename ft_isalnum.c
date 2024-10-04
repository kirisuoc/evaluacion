/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubegar2 <rubegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:02:06 by rubegar2          #+#    #+#             */
/*   Updated: 2024/10/03 11:36:39 by rubegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
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

	c = '?';
	if (ft_isalnum(c))
	{
		printf("is alphabet or numeric %c", c);
	}
	else
	{
		printf("is not alphabet or numeric %c", c);
	}
	return (0);
}*/
