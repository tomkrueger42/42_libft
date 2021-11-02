/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 13:26:36 by tomkrueger        #+#    #+#             */
/*   Updated: 2021/11/03 00:43:03 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static char	*ft_itoa_recu(int n, char *result, int counter)
{
	if (!n)
	{
		result[counter] = 0;
		return (result);
	}
	result[counter] = n % 10 + '0';
	return (ft_itoa_recu(n / 10, result, counter + 1));
}

static char	*ft_strrev(char *str, int i)
{
	char	c;

	if (i > (ft_strlen(str) / 2 - 1))
		return (str);
	c = str[i];
	str[i] = str[ft_strlen(str) - 1 - i];
	str[ft_strlen(str) - 1 - i] = c;
	return (ft_strrev(str, i + 1));
}

/* This function converts an integer n to a string */
char	*ft_itoa(int n)
{
	char	*result;

	result = malloc(sizeof(char) * 12);
	if (result == NULL)
		return (NULL);
	if (n == 0)
	{
		result[0] = '0';
		result[1] = 0;
	}
	else if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_strlcpy(result, "-2147483648", 12);
			return (result);
		}
		result[0] = '-';
		result[1] = *ft_strrev(ft_itoa_recu(n * (-1), &result[1], 0), 0);
	}
	else
	{
		result = ft_strrev(ft_itoa_recu(n, result, 0), 0);
	}
	return (result);
}
