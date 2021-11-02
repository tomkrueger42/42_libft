/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:31:16 by tomkrueger        #+#    #+#             */
/*   Updated: 2021/10/14 16:22:13 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function writes char c onto filedescriptor fd */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
