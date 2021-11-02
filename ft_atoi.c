/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:32:25 by tkruger           #+#    #+#             */
/*   Updated: 2021/11/01 17:49:16 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function converts a string to an integer */
int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str != '\0' && (*str == 32 || *str == '\t' || *str == '\n'
		|| *str == '\r' || *str == '\v' || *str == '\f'))
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
