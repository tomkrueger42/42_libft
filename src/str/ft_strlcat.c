/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:18:45 by tkruger           #+#    #+#             */
/*   Updated: 2021/11/03 00:42:41 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function concatinates a string to another string */
size_t	ft_strlcat(char *dst, const char *src, int dstsize)
{
	int	slen;
	int	dlen;
	int	i;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	i = 0;
	if (dlen >= dstsize)
		return ((size_t)dstsize + (size_t)slen);
	while (src[i] && (dlen + i + 1) < dstsize)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	if (dstsize >= dlen + i)
		dst[dlen + i] = 0;
	return ((size_t)dlen + (size_t)slen);
}
