/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:42:00 by tkruger           #+#    #+#             */
/*   Updated: 2022/01/21 21:44:01 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	*ft_getnbrs(char *str)
{
	int		*nbrs;
	char	**chrs;
	int		i;

	if (str == NULL)
		return (NULL);
	i = 0;
	chrs = ft_split(str, ' ');
	nbrs = ft_calloc(sizeof(int), ft_strlen(*chrs));
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
