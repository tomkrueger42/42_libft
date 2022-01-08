/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 13:01:55 by tkruger           #+#    #+#             */
/*   Updated: 2022/01/08 16:03:51 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* This function calls ft_strjoin() and frees the given parameters */
char	*ft_strjoin_free(char const *s1, char const *s2)
{
	char	*new;
	
	new = ft_strjoin(s1, s2);
	free((void *)s1);
	free((void *)s2);
	return (new);
}
