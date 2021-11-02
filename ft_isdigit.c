/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:46:28 by tkruger           #+#    #+#             */
/*   Updated: 2021/11/01 17:53:02 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function checks if char c is a digit */
int	ft_isdigit(int c)
{
	return ((c >= 48) && (c <= 57) ? 1 : 0);
}
