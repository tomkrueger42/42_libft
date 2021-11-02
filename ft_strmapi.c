/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:18:36 by tomkrueger        #+#    #+#             */
/*   Updated: 2021/10/14 16:37:23 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function allocates memory and iterates each character in a string using 
char (*f)(unsigned int, char) and stores that in the allocated memory */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;

	if (!s)
		return (0);
	i = 0;
	new = malloc(ft_strlen(s) + 1);
	if (new == NULL)
		return (NULL);
	while (s[i++])
		new[i - 1] = f(i - 1, s[i - 1]);
	new[i - 1] = 0;
	return (new);
}
