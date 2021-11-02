/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:18:20 by tkruger           #+#    #+#             */
/*   Updated: 2021/10/14 16:30:56 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function calculates a strings length */
int	ft_strlen(const char *s)
{
	int	c;

	c = 0;
	while (s[c])
		c++;
	return (c);
}
