/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:18:34 by tkruger           #+#    #+#             */
/*   Updated: 2022/02/09 19:50:50 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function copies a string to another string */
size_t	ft_strlcpy(char *dst, const char *src, int dstsize)
{
	int	counter;

	counter = 0;
	if (dst == NULL)
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
