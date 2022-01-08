/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 18:08:32 by tkruger           #+#    #+#             */
/*   Updated: 2022/01/08 16:00:51 by tomkrueger       ###   ########.fr       */
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
	i = 0;
	while (s[start + i] && i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	new[len] = 0;
	return (new);
}
