/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:05:27 by tkruger           #+#    #+#             */
/*   Updated: 2021/12/20 18:12:42 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
// for free(3)
#include <stdlib.h>
// for bool
#include <stdbool.h>

bool	ft_isint(char *str)
{
	char	*new;
	int		result;

	new = ft_itoa(ft_atoi(str));
	result = ft_strncmp(str, new, ft_strlen(str));
	free(new);
	if (result == 0)
		return (true);
	else
		return (false);
}
