/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:27:22 by tomkrueger        #+#    #+#             */
/*   Updated: 2022/02/21 12:39:25 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	get_digit(char c, int digits_in_base);

/* This function converts a base 10 decimal number to an integer */
int	ft_atoi(const char *str)
{
	return (ft_atoi_base(str, 10));
}

/* This function converts any number to an integer */
int	ft_atoi_base(const char *str, int base)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str != '\0' && ft_iswhitespace(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str != '\0' && *str + 1 != '\0' && *str == '0'
		&& ft_tolower(*str + 1) == 'x')
		str += 2;
	while (get_digit(ft_tolower(*str), base) >= 0)
	{
		result *= base;
		result += get_digit(ft_tolower(*str), base) * sign;
		str++;
	}
	return (result);
}

int	get_digit(char c, int digits_in_base)
{
	int	max_digit;

	if (digits_in_base <= 10)
		max_digit = digits_in_base + '0';
	else
		max_digit = digits_in_base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}
