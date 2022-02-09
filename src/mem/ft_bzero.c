/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 11:20:38 by tkruger           #+#    #+#             */
/*   Updated: 2022/02/09 18:32:42 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function sets n amount of bytes, s is pointing to, to 0 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
