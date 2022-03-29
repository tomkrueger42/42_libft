/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:37:51 by tomkrueger        #+#    #+#             */
/*   Updated: 2022/02/20 01:47:47 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
// for size_t
#include <stddef.h>

/* This fn() returns the length of a char array */
size_t	ft_arrlen(char **arr)
{
	size_t	count;

	count = 0;
	if (arr == NULL)
		return (0);
	while (arr[count] != 0)
		count++;
	return (count);
}
