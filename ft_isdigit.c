/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubegar2 <rubegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:02:27 by rubegar2          #+#    #+#             */
/*   Updated: 2024/10/03 11:34:39 by rubegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	if (i >= '0' && i <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*int main(void)
{
	int i;

	i = '3';
	if(ft_isdigit(i))
	{
		printf("is digit %c", i);
	}
	else
	{
		printf("not digit %c", i);
	}
	return (0);
}*/