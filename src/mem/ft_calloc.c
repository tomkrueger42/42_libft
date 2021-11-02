/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:45:00 by tkruger           #+#    #+#             */
/*   Updated: 2021/11/03 00:43:46 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function allocates memory and gives the bytes allocated the value 0 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (!count || !size)
	{
		count++;
		size++;
	}
	p = malloc(count * size);
	if (p)
		ft_bzero(p, count * size);
	if (p == NULL)
		return (NULL);
	return (p);
}
