/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:31:36 by tkruger           #+#    #+#             */
/*   Updated: 2021/12/21 22:40:59 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void ft_free_all(int count, ...)
{
	va_list	pointers;
	void	*ptr;

	va_start(pointers, count);
	while (count-- > 0)
	{
		ptr = va_arg(pointers, uintptr_t);
		if (ptr != NULL)
			free(ptr);
	}
}
