/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 18:10:11 by tkruger           #+#    #+#             */
/*   Updated: 2022/03/07 12:57:59 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
// for size_t
#include <stddef.h>

/* This function compares the first n characters of two strings */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if ((s1 == NULL && s2 == NULL) || n == 0)
		return (0);
	else if (s1 == NULL && s2 != NULL)
		return (-1);
	else if (s1 != NULL && s2 == NULL)
		return (1);
	while (s1[i] == s2[i] && (n - 1) > i && s1[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
