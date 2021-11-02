/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:18:34 by tkruger           #+#    #+#             */
/*   Updated: 2021/11/03 00:42:37 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function copies a string to another string */
size_t	ft_strlcpy(char *dst, const char *src, int dstsize)
{
	int	counter;

	counter = 0;
	if (!dst)
		return (0);
	if (dstsize <= 0)
		return (ft_strlen(src));
	while (((dstsize - 1) > counter) && src[counter])
	{
		dst[counter] = src[counter];
		counter++;
	}
	dst[counter] = 0;
	return (ft_strlen(src));
}
