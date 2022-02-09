/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 16:28:47 by tkruger           #+#    #+#             */
/*   Updated: 2022/02/09 19:48:06 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function searches for the first occurence of a char in a string and
returns its address */
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s != NULL && s[i] != '\n')
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	if (c == 0)
		return ((char *)&s[i]);
	return (NULL);
}
