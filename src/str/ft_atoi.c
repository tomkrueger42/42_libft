/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:32:25 by tkruger           #+#    #+#             */
/*   Updated: 2022/01/24 15:08:08 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function converts a string to an integer */
int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str != '\0' && ft_iswhitespace(*str) == 1)
		str++;
	if ((*str != '+' && *str != '-' && !ft_isdigit(*str)))
		return (0);
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
		result = (result * 10) + *str++ - '0';
	return (sign * result);
}
