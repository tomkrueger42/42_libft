/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 18:08:32 by tkruger           #+#    #+#             */
/*   Updated: 2022/02/22 15:12:01 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
// for size_t
#include <stddef.h>

/* This function allocates memory where it stores a substring of a string */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	if (s == NULL || len <= 0)
		return (NULL);
	new = ft_calloc(len + 1, sizeof(char));
	if (new == NULL)
		return (NULL);
	else if (start >= (unsigned int)ft_strlen(s))
	{
		*new = 0;
		return (new);
	}
	i = 0;
	while (s[start + i] && i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	new[len] = '\0';
	return (new);
}

/* This function calls ft_substr() and frees the given parameters */
char	*ft_substr_free(char const *s, unsigned int start, size_t len)
{
	char	*new;

	new = ft_substr(s, start, len);
	ft_free((void **)&s);
	return (new);
}
