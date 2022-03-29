/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 11:13:51 by tkruger           #+#    #+#             */
/*   Updated: 2021/11/03 00:42:21 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
// for size_t
#include <stddef.h>

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
