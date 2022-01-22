/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:32:25 by tkruger           #+#    #+#             */
/*   Updated: 2022/01/22 20:06:21 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_isdigit2(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	ft_iswhitespace2(int c)
{
	if (c == ' ' || c == '\t' || c == '\r'
		|| c == '\n' || c == '\v' || c == '\f')
		return (1);
	return (0);
}

/* This function converts a string to an integer */
int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str != '\0' && ft_iswhitespace2(*str) == 1)
		str++;
	if ((*str != '+' && *str != '-' && !ft_isdigit2(*str)))
		return (0);
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	while (ft_isdigit2(*str))
		result = (result * 10) + *str++ - '0';
	return (sign * result);
}
