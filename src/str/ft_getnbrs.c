/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:42:00 by tkruger           #+#    #+#             */
/*   Updated: 2022/02/09 18:37:10 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This f() extracts all integers from a 2D char array */
int	*ft_getnbrs(char **numbers)
{
	int		*nbrs;
	char	**chrs;
	int		i;

	if (numbers == NULL)
		return (NULL);
	i = 0;
	nbrs = ft_calloc(ft_arrlen(numbers), sizeof(int));
	if (nbrs == NULL)
		return (NULL);
	while (chrs[i] != NULL)
	{
		if (ft_isint(chrs[i]) == false)
		{
			free(nbrs);
			return (NULL);
		}
		nbrs[i] = ft_atoi(chrs[i]);
		free(chrs[i]);
		i++;
	}
	free(chrs);
	return (nbrs);
}
