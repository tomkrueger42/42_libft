/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:59:40 by tkruger           #+#    #+#             */
/*   Updated: 2021/12/19 20:06:59 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_min(int count, ...)
{
	va_list	args;
	int		tmp;
	int		smallest;

	smallest = INT32_MAX;
	va_start(args, count);
	while (count-- > 0)
	{
		tmp = va_arg(args, int);
		if (smallest > tmp)
			smallest = tmp;
	}
	return (smallest);
}
