/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:17:18 by tkruger           #+#    #+#             */
/*   Updated: 2021/11/02 10:24:09 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function converts lowercase characters to uppercase characters */
int	ft_toupper(int c)
{
	return ((c >= 'a') && (c <= 'z') ? c - 32 : c);
}