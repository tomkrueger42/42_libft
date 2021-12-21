/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:31:36 by tkruger           #+#    #+#             */
/*   Updated: 2021/12/21 23:08:18 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This f() frees all pointers passed to it as arguments */
void ft_free_all(int count, ...)
{
	va_list	pointers;
	void	*ptr;

	va_start(pointers, count);
	while (count-- > 0)
	{
		ptr = va_arg(pointers, unsigned long);
		if (ptr != NULL)
			free(ptr);
	}
	va_end(pointers);
}
