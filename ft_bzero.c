/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 11:20:38 by tkruger           #+#    #+#             */
/*   Updated: 2021/10/14 15:49:48 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function sets n amount of bytes, s is pointing to, to 0 */
void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = s;
	while (n--)
		*str++ = 0;
}
