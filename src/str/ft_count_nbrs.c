/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_nbrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 09:53:00 by tomkrueger        #+#    #+#             */
/*   Updated: 2022/02/20 15:55:25 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function count all the numbers that occur in a string, even hexadec */
size_t	ft_count_nbrs(const char *str)
{
	size_t	count;
	int		i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]))
		{
			if (str[i] == '0' && str[i + 1] != '\0' && str[i + 1] == 'x')
			{
				i += 2;
				while (ft_isdigit(str[i])
					|| (ft_tolower(str[i]) >= 'a' && ft_tolower(str[i]) <= 'f'))
					i++;
			}
			while (ft_isdigit(str[i]))
				i++;
			count++;
		}
		while (str[i] != '\0' && ft_isdigit(str[i]) == 0)
			i++;
	}
	return (count);
}
