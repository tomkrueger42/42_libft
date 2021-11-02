/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:24:01 by tkruger           #+#    #+#             */
/*   Updated: 2021/11/03 00:43:39 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* The function compares the first n bytes of s1 and s2 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*sone;
	const char	*stwo;
	size_t		i;

	sone = s1;
	stwo = s2;
	i = 0;
	if (!n)
		return (0);
	while (sone[i] == stwo[i] && (n - 1) > i)
		i++;
	return ((unsigned char)sone[i] - (unsigned char)stwo[i]);
}
