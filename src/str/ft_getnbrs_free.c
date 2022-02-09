/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnbrs_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:18:58 by tkruger           #+#    #+#             */
/*   Updated: 2022/02/09 18:36:08 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	*ft_getnbrs_free(char **numbers)
{
	int	*nbrs;
	int	i;

	nbrs = ft_getnbrs(numbers);
	i = 0;
	while (numbers[i] != 0)
		free(numbers[i++]);
	free(numbers);
	return (nbrs);
}
