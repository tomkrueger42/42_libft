/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:04:30 by tomkrueger        #+#    #+#             */
/*   Updated: 2021/10/14 16:23:32 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function writes an integer to filedescriptor fd */
void	ft_putnbr_fd(int n, int fd)
{
	char	a;

	if (n < 0)
	{
		if (n == -2147483648)
			return ((void)write(fd, "-2147483648", 11));
		write(fd, "-", 1);
		n = -n;
	}
	if (n / 10 > 0)
		ft_putnbr_fd(n / 10, fd);
	a = n % 10 + '0';
	write(fd, &a, 1);
}
