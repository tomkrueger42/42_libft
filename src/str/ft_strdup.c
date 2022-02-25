/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:44:54 by tkruger           #+#    #+#             */
/*   Updated: 2022/02/25 11:33:18 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function allocates memory for string s1 and copies s1 to the 
allocated space */
char	*ft_strdup(const char *s1)
{
	char	*p;

	if (s1 == NULL)
		return (NULL);
	p = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (p == NULL)
		return (NULL);
	return ((char *)ft_memcpy(p, s1, ft_strlen(s1) + 1));
}
