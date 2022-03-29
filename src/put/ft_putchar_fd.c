/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:31:16 by tomkrueger        #+#    #+#             */
/*   Updated: 2021/12/16 15:04:19 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
// for write(2)
#include <unistd.h>

/* This function writes char c onto filedescriptor fd */
int	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}
