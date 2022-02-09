/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:42:00 by tkruger           #+#    #+#             */
/*   Updated: 2022/02/09 20:03:38 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This f() extracts all integers from a 2D char array */
int	*ft_getnbrs(char **numbers)
{
	int		*ints;
	int		i;

	if (numbers == NULL)
		return (NULL);
	i = 0;
	ints = ft_calloc(ft_arrlen(numbers), sizeof(int));
	if (ints == NULL)
		return (NULL);
	while (numbers[i] != NULL)
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
