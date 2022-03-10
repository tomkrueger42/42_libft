/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 12:38:23 by tkruger           #+#    #+#             */
/*   Updated: 2022/03/10 17:57:38 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function searches for the last occurence of a char in a string and
returns its address */
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (s != NULL && i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/* This function searches for the first occurence of a char in a string and
returns its position */
int	ft_strrchr_int(const char *s, int c)
{
	if (ft_strrchr(s, c) == NULL)
		return (-1);
	else
		return (ft_strrchr(s, c) - s);
}
