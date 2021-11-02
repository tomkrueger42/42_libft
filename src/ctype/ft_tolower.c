/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:48:40 by tkruger           #+#    #+#             */
/*   Updated: 2021/11/03 00:44:28 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function converts uppercase characters into lowercase characters */
int	ft_tolower(int c)
{
	return ((c >= 'A') && (c <= 'Z') ? c + 32 : c);
}
