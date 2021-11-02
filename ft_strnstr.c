/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 11:13:51 by tkruger           #+#    #+#             */
/*   Updated: 2021/10/14 16:33:37 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	compare(const char *haystack, const char *needle, size_t len)
{
	while (*haystack && *needle && len-- > 0)
	{
		if (*haystack++ != *needle++)
			return (0);
	}
	return (*needle == '\0');
}

/* This function finds a string in another string in the first len bytes */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		if ((*haystack == *needle) && compare(haystack, needle, len))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
