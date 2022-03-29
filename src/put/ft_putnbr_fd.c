/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:04:30 by tomkrueger        #+#    #+#             */
/*   Updated: 2021/12/16 15:06:13 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
// for write(2)
#include <unistd.h>

/* This function writes an integer to filedescriptor fd */
int	ft_putnbr_fd(int n, int fd)
{
	char	a;
	int		c;

	c = 0;
	if (n < 0)
	{
		if (n == -2147483648)
			return (write(fd, "-2147483648", 11));
		write(fd, "-", 1);
		n = -n;
	}
	if (n / 10 > 0)
		c += ft_putnbr_fd(n / 10, fd);
	a = n % 10 + '0';
	return (c + write(fd, &a, 1));
}
