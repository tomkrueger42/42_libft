/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:11:55 by tkruger           #+#    #+#             */
/*   Updated: 2021/12/19 20:12:32 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_min(int count, ...)
{
	va_list	args;
	int		tmp;
	int		largest;

	largest = INT32_MIN;
	va_start(args, count);
	while (count-- > 0)
	{
		tmp = va_arg(args, int);
		if (largest < tmp)
			largest = tmp;
	}
	return (largest);
}
