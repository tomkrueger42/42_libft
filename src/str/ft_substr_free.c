/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 18:08:32 by tkruger           #+#    #+#             */
/*   Updated: 2022/01/08 16:02:44 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function calls ft_substr() and frees the given parameters */
char	*ft_substr_free(char const *s, unsigned int start, size_t len)
{
	char	*new;

	new = ft_substr(s, start, len);
	free((void *)s);
	return (new);
}
