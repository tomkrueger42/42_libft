/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:42:00 by tkruger           #+#    #+#             */
/*   Updated: 2022/02/18 01:08:06 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
// for free(3)
#include <stdlib.h>
// for bool
#include <stdbool.h>

/* This f() extracts all integers from a 2D char array */
int	*ft_getnbrs(char **numbers)
{
	int		*ints;
	size_t	i;

	if (numbers == NULL)
		return (NULL);
	ints = ft_calloc(ft_arrlen(numbers), sizeof(int));
	if (ints == NULL)
		return (NULL);
	i = 0;
	while (i < ft_arrlen(numbers))
	{
		if (ft_isint(numbers[i]) == false)
		{
			free(ints);
			return (NULL);
		}
		ints[i] = ft_atoi(numbers[i]);
		i++;
	}
	return (ints);
}

/* This fn() calls ft_getnbrs() with the given parameter and frees it after */
int	*ft_getnbrs_free(char **numbers)
{
	int	*nbrs;

	nbrs = ft_getnbrs(numbers);
	ft_free_array(&numbers);
	return (nbrs);
}
