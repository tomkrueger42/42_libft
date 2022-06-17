/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:59:40 by tkruger           #+#    #+#             */
/*   Updated: 2022/06/17 15:35:19 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
// for va_list
#include <stdarg.h>
// for INT32_MAX on different operating systems
#ifdef __linux__
# include <stdint.h>
#else
# include <stdlib.h>
#endif

int	ft_min(int count, ...)
{
	va_list	numbers;
	int		tmp;
	int		smallest;

	smallest = INT32_MAX;
	va_start(numbers, count);
	while (count-- > 0)
	{
		tmp = va_arg(numbers, int);
		if (smallest > tmp)
			smallest = tmp;
	}
	va_end(numbers);
	return (smallest);
}
