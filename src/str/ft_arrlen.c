/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:37:51 by tomkrueger        #+#    #+#             */
/*   Updated: 2022/02/09 18:47:49 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

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
