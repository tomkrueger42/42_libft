/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 15:52:05 by tkruger           #+#    #+#             */
/*   Updated: 2021/10/14 16:17:14 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function returns the pointer to the first char c in s, 
only parsing the first n characters */
void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;

	p = s;
	while (n && *p)
	{
		if (*p == c)
			return ((char *)p);
		n--;
		p++;
	}
	if (*p == 0 && c == 0 && n > 0)
		return ((char *)p);
	return (NULL);
}
