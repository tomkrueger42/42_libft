/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_nbrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 09:53:00 by tomkrueger        #+#    #+#             */
/*   Updated: 2022/02/15 10:05:30 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

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
			while (str[i] != '\0' && ft_isdigit(str[i]))
				i++;
			count++;
		}
		while (str[i] != '\0' && ft_isdigit(str[i]) == 0)
			i++;
	}
	return (count);
}
