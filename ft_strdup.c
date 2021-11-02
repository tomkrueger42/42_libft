/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:44:54 by tkruger           #+#    #+#             */
/*   Updated: 2021/10/14 16:28:03 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function allocates memory for string s1 and copies s1 to the 
allocated space */
char	*ft_strdup(const char *s1)
{
	char	*p;

	p = malloc(ft_strlen(s1) + 1);
	if (p == NULL)
		return (NULL);
	return ((char *)ft_memcpy(p, s1, ft_strlen(s1) + 1));
}
