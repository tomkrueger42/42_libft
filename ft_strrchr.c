/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 12:38:23 by tkruger           #+#    #+#             */
/*   Updated: 2021/10/14 16:34:03 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function searches the last occurence of a character in a string */
char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	size_t	i;

	i = 0;
	last = 0;
	if (!*s && c)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			last = (char *)&s[i];
		i++;
	}
	if (c == 0 && !s[i])
		last = (char *)&s[i];
	return (last);
}
