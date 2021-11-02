/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 11:15:49 by tkruger           #+#    #+#             */
/*   Updated: 2021/10/14 16:21:37 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function sets len bytes from b to char c */
void	*ft_memset(void *b, int c, size_t len)
{
	char	*p_b;

	p_b = b;
	while (len--)
		*p_b++ = c;
	return (b);
}
