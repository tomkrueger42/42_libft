/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 18:08:32 by tkruger           #+#    #+#             */
/*   Updated: 2021/11/03 00:41:26 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function allocates memory where it stores a substring of a string */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	new = (char *)malloc(len + 1);
	if (new == NULL || !s)
	{
		return (NULL);
	}
	else if (start >= (unsigned int)ft_strlen(s))
	{
		*new = 0;
		return (new);
	}
	else
	{
		i = 0;
		while (s[start + i] && i < len)
		{
			new[i] = s[start + i];
			i++;
		}
		new[len] = 0;
		return (new);
	}
}
