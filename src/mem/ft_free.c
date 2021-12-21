/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:54:12 by tkruger           #+#    #+#             */
/*   Updated: 2021/12/21 23:08:26 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This f() frees a va_list of pointers */
void	ft_free(int count, va_list pointers)
{
	void	*ptr;

	while (count-- > 0)
	{
		ptr = va_arg(pointers, unsigned long);
		if (ptr != NULL)
			free(ptr);
	}
}