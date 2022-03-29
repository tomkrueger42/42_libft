/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:56:46 by tomkrueger        #+#    #+#             */
/*   Updated: 2022/02/09 18:34:50 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
// for write(2)
#include <unistd.h>

/* This function writes a string to filedescriptor fd */
int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (s == NULL)
		return (write(fd, "(null)", 6));
	while (*s)
		i += write(fd, s++, 1);
	return (i);
}
