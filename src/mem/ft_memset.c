/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 11:15:49 by tkruger           #+#    #+#             */
/*   Updated: 2022/02/09 18:34:00 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function sets len bytes from b to char c */
void	*ft_memset(void *b, int c, size_t len)
{
	char	*p_b;

	p_b = b;
	if (b == NULL)
		return (NULL);
	while (len--)
		*p_b++ = c;
	return (b);
}
