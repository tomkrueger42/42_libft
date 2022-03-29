/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:18:20 by tkruger           #+#    #+#             */
/*   Updated: 2022/03/09 02:26:44 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function calculates a strings length */
int	ft_strlen(const char *s)
{
	int	c;

	c = 0;
	if (s == NULL)
		return (0);
	while (s[c])
		c++;
	return (c);
}

/* This function calls ft_strlen with the parameter and frees it afterwards */
int	ft_strlen_free(const char *s)
{
	int	c;

	c = ft_strlen(s);
	ft_free((void **)&s);
	return (c);
}
